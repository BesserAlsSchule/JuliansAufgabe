#include "main.h"
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int *m_werteAufsteigendOderAbsteigendSortieren()
{
    int* values = new int;
    int numberOfValues = values[0];
    int tmp = 0;
    bool ascending_or_descending = true;

    for (int i = 1; i <= values[0]; i++)
    {
        cout << values[0];
    }

    cout << "Sollen die Werte austeigend oder absteigend sortiert werden?\tBitte \"1\" f\201r aufsteigend, oder \"0\" f\201r absteigend eingeben!\n";
    cin >> ascending_or_descending;


    do  {
            if (ascending_or_descending == true)
            {
                for (int i = 1; i <= numberOfValues; i++)
                {
                    for (int j = i + 1; j <= numberOfValues; j++)
                    {
                        if(values[i] < values[j])                 //Tausche ggfls Elemente untereinander -> aufsteigend sortieren
                        {
                            tmp = values[i];
                            values[i] = values[j];
                            values[j] = tmp;
                        }
                    }
                }
            }

            else if (ascending_or_descending == false)
            {
                for (int i = 1; i <= numberOfValues; i++)
                {
                    for (int j = i + 1; j <= numberOfValues; j++)
                    {
                        if(values[i] > values[j])                 //Tausche ggfls Elemente untereinander -> absteigend sortieren
                        {
                            tmp = values[i];
                            values[i] = values[j];
                            values[j] = tmp;
                        }
                    }
                }
            }
            if (ascending_or_descending != true || ascending_or_descending != false)
            {
                cout << "Deine Auswahl ist ung\201ltig. Verwende 1 oder 0.\n";
            }

        }   while (ascending_or_descending != true || ascending_or_descending != false);

    return values; //verändert
}


