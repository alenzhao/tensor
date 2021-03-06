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

#include <tensor/linalg.h>

namespace linalg {

  /**Right eigenvalue and eigenvector with the largest absolute
     value, computed using the power method. 'iter' is the maximum
     number of iterations of the algorithm. 'tol' is the maximum
     absolute error in the elements of the eigenvector.

     \ingroup Linalg
  */
  double
  eig_power_right(const RTensor &O, RTensor *vector, size_t iter, double tol)
  {
    assert(O.rows() == O.columns());
    return do_eig_power(new tensor::MatrixMap<RTensor>(O), O.columns(),
                        vector, iter, tol);
  }

  /**Left eigenvalue and eigenvector with the largest absolute
     value, computed using the power method. 'iter' is the maximum
     number of iterations of the algorithm. 'tol' is the maximum
     absolute error in the elements of the eigenvector.

     \ingroup Linalg
  */
  double
  eig_power_left(const RTensor &O, RTensor *vector, size_t iter, double tol)
  {
    assert(O.rows() == O.columns());
    return do_eig_power(new tensor::MatrixMap<RTensor>(O, true), O.columns(),
                        vector, iter, tol);
  }

} // namespace linalg
