#!/bin/sh

arpack_SOURCES="sgetv0.f slaqrb.f sstqrb.f ssortc.f
ssortr.f sstatn.f sstats.f snaitr.f snapps.f snaup2.f snaupd.f
snconv.f sneigh.f sngets.f ssaitr.f ssapps.f ssaup2.f ssaupd.f
ssconv.f sseigt.f ssgets.f sneupd.f sseupd.f ssesrt.f dgetv0.f
dlaqrb.f dstqrb.f dsortc.f dsortr.f dstatn.f dstats.f dnaitr.f
dnapps.f dnaup2.f dnaupd.f dnconv.f dneigh.f dngets.f dsaitr.f
dsapps.f dsaup2.f dsaupd.f dsconv.f dseigt.f dsgets.f dneupd.f
dseupd.f dsesrt.f cnaitr.f cnapps.f cnaup2.f cnaupd.f cneigh.f
cneupd.f cngets.f cgetv0.f csortc.f cstatn.f znaitr.f znapps.f
znaup2.f znaupd.f zneigh.f zneupd.f zngets.f zgetv0.f zsortc.f
zstatn.f icnteq.f icopy.f iset.f iswap.f ivout.f second_NONE.f
svout.f smout.f dvout.f dmout.f cvout.f cmout.f zvout.f zmout.f"

for i in ${arpack_SOURCES}; do ./f2c.exe ../arpack-ng/$i -o `basename $i`.c; done
