#!/bin/bash

echo -e "Sprawdzenie aktywnosci"

finger seter >> zbior.txt

if [ "$(cat zbior.txt | grep "On since" )" != "" ]
then
    
    echo "Seter aktywny"
    
else
    
    echo "Seter nie aktywny"
    
fi
