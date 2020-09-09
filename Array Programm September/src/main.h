#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <cstring>
#include <vector>

using namespace std;

int *a_leererBehaelter();                                                   //1
int *b_zusammenstellungFesterAnzahlBehaelter();                             //2
int *c_neuenBehaelterAnErsterStelleEinbauen(int* values);                   //3
int *d_neuenBehaelterAnLetzterStelleEinbauen(int* values);                  //4
int *e_neuenBehaelterAnBeliebigerStelleEinbauen(int* values);               //5
int *f_erstenBehaelterLoeschen(int* values);                                //6
int *g_letztenBehaelterLoeschen(int* values);                               //7
int *h_beliebigenBehaelterLoeschen(int* values);                            //8
void *i_zusammenstellungVonVorneNachHintenAuflisten();                      //9
void *j_zusammenstellungVonHintenNachVorneAuflisten(int* values);                      //10
void *k_beliebigenBehaelterAuslesen(int* values);                                      //11
int *l_beliebigenWertInZusammenstellungAendern(int* values);                           //12
int *m_werteAufsteigendOderAbsteigendSortieren();                           //13
