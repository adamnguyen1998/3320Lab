#!/bin/bash
echo "Pick a command from the list in the collection: " 
read input
if (grep $input mandatabase.txt); then
{
grep $input mandatabase.txt;
}
else
echo "sorry, I cannot help you"

fi
