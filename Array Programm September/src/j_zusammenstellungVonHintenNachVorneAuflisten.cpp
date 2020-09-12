#include "main.h"
#include <iostream>

using namespace std;

/// <summary>
/// bubblesort in die andere richtung?
/// </summary>
/// <param name="values"></param>
/// <returns></returns>

int *j_zusammenstellungVonHintenNachVorneAuflisten(int *values)
{
    int numberOfValues = values[0];

    cout << "Die Daten werden von hinten nach vorne aufgelistet:\n";

    for (int i = values[numberOfValues]; i > 1; i--)
    {
        cout << values[i] << endl;
    }
    return;
}

