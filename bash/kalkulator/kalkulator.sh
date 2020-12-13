#!/bin/bash

if [ "$1" = "-h" ] || [ "$1" = "-help" ] || [ "$1" = "-?" ]
then
    
    cat help.txt | less
    
else
    
    clear
    
    echo "Witaj $USER !!!"
    echo "Jestes w programie kalkulator, ktory + - * / oraz poteguje (**)"
    echo -e "\nJesli potrzebujesz pomocy w obsludze uzyj -h/-help/-? przy uruchamianiu programu..."
    
    sleep 6
    
    zapytanie="t"
    
    while [ "$zapytanie" = "t" ] || [ "$zapytanie" = "tak" ]
    do
        
        clear
        
        echo "Wprowadz a="
        read aa
        echo -e "\nPodaj rodzaj dzialania + - * / lub **"
        read znak
        echo -e "\nWprowadz b="
        read bb
        echo
        
        case "$znak" in
            
            "+")echo -e "Wynik + wynosi:"
                wynik=$( echo "scale=2; $aa+$bb" | bc -l )
                echo "$wynik"
                echo "$aa + $bb = $wynik" >> wyniki.txt
                echo -e "\nDzialanie zostalo zapisane w pliku wyniki.txt"
            ;;
            
            "-")echo -e "Wynik - wynosi:"
                wynik=$( echo "scale=2; $aa-$bb" | bc -l )
                echo "$wynik"
                echo "$aa - $bb = $wynik" >> wyniki.txt
                echo -e "\nDzialanie zostalo zapisane w pliku wyniki.txt"
            ;;
            
            "*")echo -e "Wynik * wynosi:"
                wynik=$( echo "scale=2; $aa*$bb" | bc -l )
                echo "$wynik"
                echo "$aa * $bb = $wynik" >> wyniki.txt
                echo -e "\nDzialanie zostalo zapisane w pliku wyniki.txt"
            ;;
            
            "/")echo -e "Wynik / wynosi:"
                wynik=$( echo "scale=2; $aa/$bb" | bc -l )
                echo "$wynik"
                echo "$aa / $bb = $wynik" >> wyniki.txt
                echo -e "\nDzialanie zostalo zapisane w pliku wyniki.txt"
            ;;
            
            "**")echo -e "Wynik ** wynosi:"
                let wynik=aa**bb
                echo "$wynik"
                echo "$aa ** $bb = $wynik" >> wyniki.txt
                echo -e "\nDzialanie zostalo zapisane w pliku wyniki.txt"
            ;;
            
            *)echo "Zle wprowadzony znak"
        esac
        
        echo -e "\nCzy chcesz dalej t/n (tak/nie)?:"
        
        read zapytanie
        
        echo -e "\nDziekujemy za skorzystanie z aplikacji kalkulator, twoja historia dzialan znajduje sie w pliku wyniki.txt\n"
        
    done
    
fi
