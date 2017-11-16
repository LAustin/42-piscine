cat /etc/passwd |
grep -v "#" |                      # remove comments
cut -d : -f 1 |                    # keep only logins
awk "NR%2==0" |                    # display every other line
rev |                              # reverse logins 
sort -r |                          # sort list reverse alphabetically
sed -n "$FT_LINE1","$FT_LINE2"p    # display range
