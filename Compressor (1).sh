#!/bin/bash
echo "How many days of files not being accessed do you seek to compress?"
read N
echo "Specify directory like /home/user/directoryname"
read directory
find $directory -iname "*" -atime +$N -type f | zip compress -@
#Since it never mentioned how to compress it, I will compress it into a .zip file.
