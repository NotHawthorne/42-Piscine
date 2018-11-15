#!/bin/sh

cat /etc/passwd | sed '/\#/d;n;p' | cut -d : -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,/, /g;s/\(.*\), /\1 /' | awk '{print}' ORS='\n\t.'
