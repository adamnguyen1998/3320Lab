#!/bin/bash

echo "What word do you want to search?"
read word
echo "Search results have found this many word(s): "
grep -o -i $word ~/midterm/myexamfile.txt | wc -l

