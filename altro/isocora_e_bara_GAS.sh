#!/bin/bash


paste ../dati_formattati/TOT1_{v,t,p} | sort --general-numeric-sort >../risultati/isocora_vtp
paste ../dati_formattati/TOT1_{p,t,v} | sort --general-numeric-sort >../risultati/isobara_ptv

exit 0
