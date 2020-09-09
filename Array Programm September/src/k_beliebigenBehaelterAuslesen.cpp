#include <iostream>
#include "main.h"
#include <stdlib.h>
#include <cstring>

using namespace std;

void *k_beliebigenBehaelterAuslesen(int *values)
{
    int numberOfValues = values[0];
    int* Values = new int[numberOfValues];
    unsigned int choice = 0;
    bool repeat = true;
    bool error = false;

    cout << "Den wieivielten Wert m\224chtest du erfahren?\n";
    cin >> choice;

    

    do  
    {
        try 
        {
            cout << "Der Wert ist " <<  values[choice] << ".\nMöchtest du einen weiteren Wert erfahren?\nGib -> 1 f\204r \"Ja\", oder -> 0 f\204r \"Nein\" ein.";
            cin >> repeat;
            error = false;
        }
        catch (out_of_range &e)
        {
            cout << "Deine Auswahl ist nicht verwertbar. Bitte weder einen Wert unter 1, noch einen \204ber " << numberOfValues << " verwenden.\n";
            error = true;

        }
            
    }   while (error == true || repeat == true);
    return 0;
}