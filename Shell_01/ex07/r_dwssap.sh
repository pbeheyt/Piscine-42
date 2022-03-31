cat /etc/passwd | grep -v '^#' | awk '{if (NR%2==0) print $0}' | awk 'BEGIN{FS=":"}{print $1}' | rev | sort -r | sed -n ${FT_LINE1},${FT_LINE2}p | sed -z 's/\n/, /g' | sed 's/, *$/./' 
