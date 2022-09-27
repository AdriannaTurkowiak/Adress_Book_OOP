#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;

public:
    UzytkownikMenedzer (string nazwaPlikuZUzytkownikami) : plikZUzytkownikami (nazwaPlikuZUzytkownikami){};
    void rejestracjaUzytkownika();
    int logowanieUzytkownika(); //new
    int wylogowanieUzytkownika(); //new
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika); //new
    void wczytajUzytkownikowZPliku();
};

#endif
