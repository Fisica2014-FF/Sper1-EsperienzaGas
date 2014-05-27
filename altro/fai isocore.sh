#!/bin/bash

paste ../dati_formattati/TOT1_{p,t,v} | sort -n | uniq --skip-fields=2 --all-repeated=separate | perl -pe "s/^$/@/" >../risultati/isocore_ptv
paste ../dati_formattati/TOT1_{v,t,p} | sort -n | uniq --skip-fields=2 --all-repeated=separate | perl -pe "s/^$/@/" >../risultati/isobare_vtp

exit 0
