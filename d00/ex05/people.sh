ldapsearch -LLL "(uid=z*)" cn | sed -n "/cn:/p" | sort -fsr
