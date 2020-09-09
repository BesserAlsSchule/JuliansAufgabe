#include "main.h"
#include <iostream>
#include <stdlib.h>
#include <cstring>

/// <summary>
/// Das ist die Beschreibung
/// </summary>
/// <param name="values"> Das eist der Parameter Value</param>
/// <returns> Es wird etwas zurückgegeben</returns>
int* e_neuenBehaelterAnBeliebigerStelleEinbauen(int* values)
{
    int uservalue = 0;
    unsigned int choiceOfPlace = 0;
    int sizeOfNewValues = values[0] + 1;

    int* newValues = new int[sizeOfNewValues];
    newValues[0] = sizeOfNewValues;

    cout << "Das hier ist das aktuelle Array mit seinen Werten.\n";
       for (int i = 1; i <= values[0]; i++)
    {
        cout << values[i] << endl;
    }
    do  {
            cout << "An welcher Stelle soll ein neues Element eingeschoben werden?\n";
            cin >> choiceOfPlace;
        }   while(!cin.fail());

    do  {
            cout << "Welche Ganzzahl soll sich an Stelle " << choiceOfPlace << " befinden?\n";
            cin >> uservalue;

            if (cin.fail())
            {
                cout << "Mit deinem Wert stimmt etwas nicht. Versuche etwas anderes.\n";
            }
        }   while (cin.fail());

    newValues[sizeOfNewValues +1] = uservalue;

    for (int i = choiceOfPlace; i <= sizeOfNewValues; i++)
    {
        newValues[i] = values[sizeOfNewValues + 1];
    }

    newValues[choiceOfPlace] = uservalue;               //Füge Wert an korrekter Stelle ein

    delete values;

    cout << "Hier die neue Reihenfolge:\n";

    for (int i = 1; i <= newValues[0]; i++)
    {
        cout << newValues[i] << endl;
    }
    return newValues;
}


