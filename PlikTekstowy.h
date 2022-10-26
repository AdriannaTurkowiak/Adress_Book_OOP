#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikTekstowy
{
    const string NAZWA_PLIKU;

protected:
    fstream plikTekstowy;
    bool czyPlikJestPusty(fstream &plikTekstowy);
};
#endif
