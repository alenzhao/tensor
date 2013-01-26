// -*- mode: c++; fill-column: 80; c-basic-offset: 2; indent-tabs-mode: nil -*-
/*
    Copyright (c) 2010 Juan Jose Garcia Ripoll

    Tensor is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published
    by the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Library General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef MPS_MPS_ALGORITHM_H
#define MPS_MPS_ALGORITHM_H

#include <mps/mps.h>

namespace mps {

  const RTensor prop_init(const RTensor &Q, const RTensor &P,
			  const RTensor *op = NULL);

  const RTensor prop_close(const RTensor &N);

  const RTensor prop_matrix(const RTensor &M0, int sense, const RTensor &Q,
			    const RTensor &P, const RTensor *op = NULL);

  const CTensor prop_init(const CTensor &Q, const CTensor &P,
			  const CTensor *op = NULL);

  const CTensor prop_close(const CTensor &N);

  const CTensor prop_matrix(const CTensor &M0, int sense, const CTensor &Q,
			    const CTensor &P, const CTensor *op = NULL);

} // namespace mps

#endif // !MPS_MPS_ALGORITHM_H
