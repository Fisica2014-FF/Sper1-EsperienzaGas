#!/bin/bash


paste ../dati_formattati/TOT1_{p,t,v} | sort -n | uniq --check-chars=12 --all-repeated=separate | perl -pe "s/^$/@/" >../risultati/dati_per_sigma/TOT1_sigma_v
paste ../dati_formattati/TOT1_{v,t,p} | sort -n | uniq --check-chars=13 --all-repeated=separate | perl -pe "s/^$/@/" >../risultati/dati_per_sigma/TOT1_sigma_p


exit 0
