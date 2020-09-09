#include "main.h"
#include <iostream>
#include <stdlib.h>
#include <cstring>

int* d_neuenBehaelterAnLetzterStelleEinbauen(int* values)
{
    int sizeOfNewValues = values[0];
    sizeOfNewValues++;
    int* Values = new int[sizeOfNewValues];
    int uservalue = 0;
 
    //values = new int[sizeOfNewValues];

    cout << "Das hier ist das aktuelle Array mit seinen Werten.\n";
    for (int i = 1; i <= values[0]; i++)
    {
        cout << values[i] << endl;
    }

    sizeOfNewValues = values[0];

    cout << "Welche Ganzzahl soll sich hinter diesen Werten befinden?\n";
    cin >> uservalue;

    values[1] = uservalue;

    for (int i = 1; i < sizeOfNewValues; i++)   //Kopiere vom alten ins neue Array
    {
        values[i] = values[i];
    }

    values[sizeOfNewValues] = uservalue;

    delete values;

    cout << "Hier die neue Reihenfolge:\n";
    for (int i = 1; i <= values[0]; i++)
    {
        cout << values[i] << endl;
    }
    return values;   //verändert
}

