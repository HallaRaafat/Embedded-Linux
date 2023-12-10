#! /bin/bash
num=$1

if [[ $num =~ [a-zA-Z] ]]; then
echo "Error String Input please enter positive integer"

elif [[ $num -le 0 ]]; then 
echo "Error Negative Number please enter positive integer "


else
     i=1
     while [[ $i -le $num ]]; do
          echo $((i*i))
          ((i+=1))
     done     

fi
