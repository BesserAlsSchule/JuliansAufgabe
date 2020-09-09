#include "main.h"
#include <iostream>

using namespace std;

void* i_zusammenstellungVonVorneNachHintenAuflisten()
{
    int* values;
    values = new int[3];
    int numberOfValues = values[0];

    cout << "Die Daten werden von vorne nach hinten aufgelistet:\n";

    for (int i = 1; i <= numberOfValues; i++)
    {
        cout << values[i] << endl;
    }
    return 0;
}