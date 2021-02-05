cat /etc/passwd | awk '(NR%2==0){print}' | sed 's/:.*//g' | rev | sort -r |  awk NR=="$FT_LINE1",NR=="$FT_LINE2" | tr '\n' ',' | sed -e 's/,/, /g' | sed -e 's/, $/./g' | tr -d "\n"
