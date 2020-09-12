#include "main.h"
#include <iostream>

using namespace std;

/// <summary>
/// auswerfen des arrays (bublesort?)
/// </summary>
/// <returns></returns>

int* i_zusammenstellungVonVorneNachHintenAuflisten()
{
    int* values;
    values = new int[3];
    int numberOfValues = values[0];

    cout << "Die Werte werden von vorne nach hinten aufgelistet:\n";

    for (int i = 1; i <= numberOfValues; i++)
    {
        cout << values[i] << endl;
    }
    return values;
}