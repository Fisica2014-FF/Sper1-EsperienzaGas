#!/bin/bash
# Spostare in dati grezzi

for file in *
do
	cut -f1 $file >../dati_formattati/${file}_p
	cut -f2 $file >../dati_formattati/${file}_v
	cut -f3 $file >../dati_formattati/${file}_t
done
exit 0
