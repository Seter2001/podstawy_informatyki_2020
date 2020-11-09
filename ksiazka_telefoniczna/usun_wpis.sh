#!/bin/bash

kon="t"

while [ "$kon" = "t" ] || [ "$kon" = "tak" ]
do
    clear
    
    echo -e "\nKogo chcesz usunac (Nazwisko Imie)?"
    read osoba
    searchResults=$(cat dane.txt | grep -n "$osoba")
    if [ -n $searchResults ]; then
        echo -e "\nNie znaleziono takiej osoby"
    else
        cat dane.txt | grep -v "$osoba" > temp.txt
        mv dane.txt temp2.txt
        mv temp.txt dane.txt
        rm temp2.txt
        clear
        echo -e "Pomyslnie usunieto:\n"
        echo $searchResults
    fi
    echo -e "\nCzy chcesz usunac kogos jeszcze t/n (tak/nie)?:"
    
    read kon
    
done
