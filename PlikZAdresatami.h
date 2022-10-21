#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "AdresatMenedzer.h"

using namespace std;

class PlikZAdresatami
{
    string nazwaPlikuZAdresatami;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int idOstatniegoAdresata;

public:
    PlikZAdresatami(string NAZWA_PLIKU_Z_ADRESATAMI): nazwaPlikuZAdresatami(NAZWA_PLIKU_Z_ADRESATAMI)
{
    idOstatniegoAdresata=0;
}
    void dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int pobierzZPlikuIdOstatniegoAdresata();
    void wczytajIdOstatniegoAdresata(int Id);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);


};
#endif
