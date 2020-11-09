#!/bin/bash

kon="t"

while [ "$kon" = "t" ] || [ "$kon" = "tak" ]
do
    clear
    
    echo "Podaj nazwisko:"
    read nazwisko
    echo "Podaj imie:"
    read imie
    echo "Podaj telefon (+aa-xxx-xxx-xxx):"
    read telefon

    searchResults=$(cat dane.txt | grep -n "$nazwisko $imie $telefon")
    if [ -n $searchResults ]; then
        echo "$nazwisko $imie $telefon" >> dane.txt
        echo -e "\nNastepujace dane zostaly zapisane: $nazwisko $imie $telefon"
    else
        clear
        echo -e "Ta osoba jest juz zapisanana w systemie:\n"
        echo $searchResults
    fi

    echo -e "\nCzy chcesz dodac kolejna osobe t/n (tak/nie)?:"
    read kon
done

