#include "main.h"
#include <iostream>

/// <summary>
/// lösche letzten wert
/// </summary>
/// <param name="values"></param>
/// <returns></returns>

int* g_letztenBehaelterLoeschen(int* values)
{
    unsigned int numberOfValues = values[0];

    int sizeOfNewValues = numberOfValues - 1;

    int* newValues = new int[sizeOfNewValues];

    cout << "Das hier ist das aktuelle Array mit seinen Werten:\n";

    for (int i = 1; i <= numberOfValues; i++)
    {
        cout << values[i] << endl;
    }

    for (int i = 1; i < numberOfValues - 1; i++)
    {
        newValues[i] = values[i];
    }

    delete values;

    "Der letzte Wert wurde gel\224scht.\n";

    for (int i = 1; i <= numberOfValues; i++)
    {
        cout << values[i] << endl;
    }

    return newValues;   //verändert
}

