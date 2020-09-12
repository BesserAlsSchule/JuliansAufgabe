#include "main.h"
#include <iostream>

using namespace std;

/// <summary>
/// lösche wert aus array an beliebiger stelle (user entscheidet)
/// </summary>
/// <param name="values"></param>
/// <returns></returns>

int* h_beliebigenBehaelterLoeschen(int* values)
{
    unsigned int numberOfValues = values[0];

    int sizeOfNewValues = numberOfValues - 1;

    int* newValues = new int[sizeOfNewValues];

    unsigned int userchoice = 0;

    cout << "Das hier ist das aktuelle Array mit seinen Werten:\n";

    for (int i = 1; i <= numberOfValues; i++)
    {
        cout << values[i] << endl;
    }

    do
    {
        cout << "Das wievielte Element soll entfernt werden? W\204hle einen Wert zwischen 1 und " << numberOfValues << ".\n";
        cin >> userchoice;
    }   while (userchoice < 1 || userchoice > numberOfValues);

    for (int i = 0; i < userchoice; i++)
    {
        newValues[i] = values[i];                   //Übertrage bis Userchoice ins neue Array
    }

    for (int i = userchoice + 1; i <= numberOfValues; i++)
    {
        newValues[i] = values[i];                   //Übertrage nach Userchoice bis Ende ins neue Array
    }

    numberOfValues -= 1;                            //Reduziere Anzahl Elemente um 1
    delete values;

    cout << "Hier die aktuellen Werte:\n";

    for (int i = 1; i <= numberOfValues; i++)
    {
        cout << values[i] << endl;
    }

    return newValues;   //verändert
}
