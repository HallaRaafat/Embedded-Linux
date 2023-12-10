#! /bin/bash

cd ~
if [ -f ~/.bashrc ]; then
  echo "File is Found"
  echo "export HELLO=$HOSTNAME" >> ~/.bashrc
  echo "LOCAL=$(whoami)" >> ~/.bashrc 
  gnome-terminal
else 
     echo "File not Found"

fi 
