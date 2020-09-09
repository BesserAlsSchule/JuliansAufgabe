#include "main.h"
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int* f_erstenBehaelterLoeschen(int* values)
{
    int sizeOfNewValues = values[0] - 1;

    int* newValues = new int[sizeOfNewValues];

    unsigned int numberOfValues = values[0];

    cout << "Das hier ist das aktuelle Array mit seinen Werten.\n";

    for (int i = 1; i <= numberOfValues; i++)
    {
        cout << values[i] << endl;
    }

    for (int i = 1; i <= numberOfValues; i++)
    {
        newValues[i] = values[i + 1];           //Übertrage Werte in neues Array
    }
    newValues[0] = numberOfValues;              //Trage Anzahl Werte an Stelle 0 ein

    delete values;                              //Lösche values - Original


    cout << "Hier die Werte, abz\201glich des urspr\201nglich letzten:\n";
    for (int i = 1; i <= numberOfValues; i++)
    {
        cout << newValues[i] << endl;
    }

    return newValues;   //verändert
}

