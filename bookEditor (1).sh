#!/bin/bash




echo "Input command: read, add, delete, edit, or quit"
read input

if [[ "$input" == "add" ]]; then
echo "What is the name of the person?"
read name
echo "What is the address of the said person?"
read address
echo "What is the phone number of the person?"
read telephone
echo "$name ; $address ; $telephone" >> phonebook.txt


elif [[ "$input" == "read" ]]; then
echo "What do you wish to find? Enter part of name, part of address, or part of telephone number"
read info
#match = `grep -i $info phonebook.txt | awk '{print $1}'`
echo " Name ; Address ; number of Phone is as followed: "
grep -i $info phonebook.txt



elif [[ "$input" == "quit" ]]; then
echo "Exiting..."

elif [[ "$input" == "delete" ]]; then
echo "What information do you want to remove?"
echo "Input information in phonebook to delete in the exact format \"Name ; Address ; Phone Number\""
read name1
sed -i "s/$name1//g" phonebook.txt
#sed '/^$/d' phonebook.txt

elif [[ "$input" == "edit" ]]; then
echo "What information do you want to edit? Information in the exact format \"Name ; Address ; Phone Number\""
read name2

echo "Input new information in the exact format \"Name ; Address ; Phone Number\""

read edit
sed -i "s/$name2/$edit/g" phonebook.txt

fi


