#include "main.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstring>
#include <stdexcept>

/// <summary>
/// definiere größe des arrays und fülle mit wertebn
/// </summary>
/// <returns></returns>

int* b_zusammenstellungFesterAnzahlBehaelter()
{
    srand(time(0));

    int* values = NULL;
    bool rand_or_not = true;
    unsigned int numberOfValues = 0;
    int uservalue = 0;

    cout << "Wie viele Elemente sollen sich nach der Prozedur im Array befinden?\n";
    try {
            cin >> numberOfValues;

            values = new int[numberOfValues];

            values[0] = numberOfValues;                                         //Trage Anzahl Werte an Stelle 0 ein
        }
    catch (out_of_range &e)
    {
        cout << "Deine Auswahl liegt au\341erhalb des G\201ltigkeitsbereichs. Verwende einen positiven, ganzzahligen Wert.\n";
    }

    cout << "Sollen die Werte automatisch erzeugt werden, oder m\224chtest du sie selbst eingeben?\nGib 1 ein, um die Werte vorbelegen zu lassen, oder gib 2 ein, um die Werte selbst festzulegen.\n";
    cin >> rand_or_not;

    try {
            for (int i = 1; i <= values[0]; i++)
            {
                if (rand_or_not == true)
                {
                    cout << "Hier ist Wert " << i << ":\t";
                    values[i] = rand();
                }
                        else //if (rand_or_not == false)
                        {
                            cout << "Gib den " << i << "., ganzzahligen Wert ein:\t";
                            cin >> uservalue;
                            values[i] = uservalue;
                        }
            }
        }
    catch (out_of_range &e)
    {
        cout << "Deine Auswahl liegt au\341erhalb des G\201ltigkeitsbereichs.\nGib 1 ein, um die Werte vorbelegen zu lassen, oder gib 2 ein, um die Werte selbst festzulegen.\n";
    }

    return values;  //verändert
}
