#include "main.h"

/*#include "a_leererBehaelter.cpp"
#include "b_zusammenstellungFesterAnzahlBehaelter.cpp"
#include "c_neuenBehaelterAnErsterStelleEinbauen.cpp"
#include "d_neuenBehaelterAnLetzterStelleEinbauen.cpp"
#include "e_neuenBehaelterAnBeliebigerStelleEinbauen.cpp"
#include "f_erstenBehaelterLoeschen.cpp"
#include "g_letztenBehaelterLoeschen.cpp"
#include "h_beliebigenBehaelterLoeschen.cpp"
#include "i_zusammenstellungVonVorneNachHintenAuflisten.cpp"
#include "j_zusammenstellungVonHintenNachVorneAuflisten.cpp"
#include "k_beliebigenBehaelterAuslesen.cpp"
#include "l_beliebigenWertInZusammenstellungAendern.cpp"
#include "m_werteAufsteigendOderAbsteigendSortieren.cpp"
*/
/*
Behälter:
-          elementarer Datentyp (int, float, char…)

-          struct

-          class / object

Zusammenstellungen:

-          array

-          vector

zu implementierenden Fähigkeiten:

1a.       leere Zusammenstellung von Behälter erzeugen

2b.      Zusammenstellung mit fester Anzahl von Behälter erzeugen

3c.       neuen Behälter an erster Stelle in Zusammenstellung einbauen

4d.      neuen Behälter an letzter Stelle in Zusammenstellung einbauen

5e.      neuen Behälter an x-ter Stelle in Zusammenstellung einbauen

6f.        ersten Behälter in Zusammenstellung löschen

7g.       letzten Behälter in Zusammenstellung löschen

8h.      x-ten Behälter in Zusammenstellung löschen

9i.         Zusammenstellung von vorne nach hinten auflisten

10j.        Zusammenstellung von hinten nach vorne auflisten

11k.       x-ten Behälter der Zusammenstellung auslesen

12l.         Wert des x-ten Behälters in Zusammenstellung ändern

13m.    Zusammenstellung aufsteigend/absteigend sortieren
e_neuenBehaelterAnBeliebigerStelleEinbauen
Start:

array von integer-werten

spätere Todos:

-          einfach verkettete Liste

-          doppelt verkettete Liste

-          binärer Baum
*/
int main()
{
    SetConsoleTitle(LPCWSTR("Finger\201bungen in der Programmierung"));

    //srand(time(0));

    int*    values = NULL;
    int     userchoice = 0;
    bool    isOutOfRange = true;

    cout << "Hallo!\nDu entscheidest, was als n\204chstes passieren soll.\n\n";

    do {
        try {
            cout << "Bitte gib die entsprechende Zahl ein, wenn du deine Auswahl getroffen hast\nund best\204tige deine Eingabe mit der Enter-Taste.\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "a: Gib 1 ein,  um ein leeres Beh\204ltnis auszugeben.\n";
            cout << "b: Gib 2 ein,  um dem Beh\204ltnis Werte hinzuzuf\201gen.\n";
            cout << "c: Gib 3 ein,  um ein neues Element vor bereits existierende Elemente zu stellen.\n";
            cout << "d: Gib 4 ein,  um ein neues Element hinter bereits existierende Elemente zu stellen.\n";
            cout << "e: Gib 5 ein,  um ein neues Element an beliebiger Stelle hinzuzuf\201gen.\n";
            cout << "f: Gib 6 ein,  um den ersten Vector von mehreren zu l\224schen.\n";
            cout << "g: Gib 7 ein,  um den letzten Vector von mehreren zu l\224schen.\n";
            cout << "h: Gib 8 ein,  um einen w\204hlbaren von mehreren zu l\224schen.\n";
            cout << "i: Gib 9 ein,  um die Werte von vorne nach hinten auflisten zu lassen.\n";
            cout << "j: Gib 10 ein, um die Werte von hinten nach vorne auflisten zu lassen.\n";
            cout << "k: Gib 11 ein, um die Werte eines beliebigen Vectors auszugeben.\n";
            cout << "l: Gib 12 ein, um einen Wert an einer bestimmten stelle zu \204ndern.\n";
            cout << "m: Gib 13 ein, um die Werte aufsteigend oder absteigend zu sortieren.\n";
            cout << "z: Gib 26 ein, um das Programm zu beenden.\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

            cout << "Deine Auswahl:\t";
            cin >> userchoice;
            cout << "Deine Auswahl -> " << userchoice << " <- wird verarbeitet.\n";

            switch (userchoice)
            {
            case 1:
                delete values;
                values = a_leererBehaelter();
                break;

            case 2:
                delete values;
                values = b_zusammenstellungFesterAnzahlBehaelter();
                break;

            case 3:
                values = c_neuenBehaelterAnErsterStelleEinbauen(values);
                break;

            case 4:
                values = d_neuenBehaelterAnLetzterStelleEinbauen(values);
                break;

            case 5:
                values = e_neuenBehaelterAnBeliebigerStelleEinbauen(values);
                break;

            case 6:
                values = f_erstenBehaelterLoeschen(values);
                break;

            case 7:
                values = g_letztenBehaelterLoeschen(values);
                break;

            case 8:
                values = h_beliebigenBehaelterLoeschen(values);
                break;

            case 9:
                //values  = i_zusammenstellungVonVorneNachHintenAuflisten();
                break;

            case 10:
                //  values = j_zusammenstellungVonHintenNachVorneAuflisten();
                break;

            case 11:
                // values = k_beliebigenBehaelterAuslesen();
                break;

            case 12:
                values = l_beliebigenWertInZusammenstellungAendern(new int(1));
                    break;

                case 13:
                    values = m_werteAufsteigendOderAbsteigendSortieren();
                    break;

                case 26:
                    cout << "Das Programm wird beendet. Bis zum n\204chsten Mal!\n";
                    break;

                default:
                    cout << "Deine Auswahl ist ung\201ltig. Bitte versuche es mit einer anderen Auswahl.\n";
            }

/*
else
{
    cout << "Deine Auswahl ist ung\201ltig. Bitte versuche es mit einer anderen Auswahl.\n";
    cin >> userchoice.at(0);
}
*/
            if (values[0] == 0)
            {
                cout << "So wie es aussieht, sind keine Daten vorhanden.\n";
            }
            else
            {
                cout << "Das hier sind die Daten ->" << endl;
            }

            for (int i = 1; i < values[0]; i++)
            {
                cout << values[i] << endl;
            }

            isOutOfRange = false;
        }

        catch (out_of_range &e)
        {
            cout << "Deine Auswahl liegt au\341erhalb des G\201ltigkeitsbereichs. Verwende einen Wert von 1 bis 26.\n";
        }
    }   while(isOutOfRange == true);

    cout << "\n_________________________________________________________________________";
    cout << "\n~~~|Dr\201cke eine beliebige Taste, um das Konsolenfenster zu schlie\341en|~~~\n";
    cout << "_________________________________________________________________________\n\n";

return 0;
}

