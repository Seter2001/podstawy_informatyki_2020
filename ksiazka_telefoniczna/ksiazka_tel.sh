#!/bin/bash

if [ "$1" = "-h" ] || [ "$1" = "-help" ] || [ "$1" = "-?" ]
then
    
    cat help.txt | less
    
else
    
    clear
    
    echo "Witaj $USER !!!"
    echo -e "To jest ksiazka telefoniczna...\n"
    
    sleep 2
    
    zapytanie="t"
    
    while [ "$zapytanie" = "t" ] || [ "$zapytanie" = "tak" ]
    do
        
        clear
        
        echo -e "Co chcesz zrobic?:\n"
        
        echo -e "\t1. Dodac nowy kontakt;"
        echo -e "\t2. Wyswietl dane;"
        echo -e "\t3. Sortuj dane;"
        echo -e "\t4. Znalezc osobe w danych;"
        echo -e "\t5. Usunac wpis z danych;"
        echo -e "\t6. Uzyskac pomoc w uzytkowaniu ksiazki telefonicznej;"
        echo -e "\t0. Wyjscie z programu\n"
        
        echo "Podaj numer (1,2,3,4,5,6 lub 0):"
        
        read numer
        
        case $numer in
            
            1)
                ./dodawanie_danych.sh
            ;;
            2)
                cat dane.txt | less
            ;;
            3)
                sort -d dane.txt | less
            ;;
            4)
                ./szukanie_danych.sh
            ;;
            5)
                ./usun_wpis.sh
            ;;
            6)
                cat  help.txt | less
            ;;
            0)
                echo -e "\nDziekuje za skorzystanie z ksiazki telefonicznej, czesc!\n"
                exit 1
            ;;
            *)
                echo "Zly wybor"
                
        esac
        
        echo -e "\nCzy chcesz zrobic cos jeszcze t/n (tak/nie)?:"
        
        read zapytanie
        
        echo -e "\nDziekuje za skorzystanie z ksiazki telefonicznej, czesc!\n"
        
    done
    
fi
