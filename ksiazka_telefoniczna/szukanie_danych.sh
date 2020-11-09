#!/bin/bash

kon="t"

        while [ "$kon" = "t" ] || [ "$kon" = "tak" ]
        do
                clear

                echo "Kogo chcesz wyszukac?:"
                read kto
		echo -e "\nWyszukane osoby:"
		grep -i "$kto" dane.txt

	 echo -e "\nCzy chcesz wyszukac kolejna osobe t/n (tak/nie)?:"

        read kon

        done
