#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main() {

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    char wybor;

    while (true) {
        wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

        switch(wybor) {
        case '1':
            ksiazkaAdresowa.rejestracjaUzytkownika();
            break;
        case '2': {
            ksiazkaAdresowa.logowanieUzytkownika();
            {
                while(ksiazkaAdresowa.czyUzytkownikJestZalogowany()) {
                    wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

                    switch(wybor) {
                    case '1':
                        ksiazkaAdresowa.dodajAdresata();
                        break;
                    case '2':
                        ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                        break;
                    case '3':
                        ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                        break;
                    case '4':
                        ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                        break;
                    case '5':
                        ksiazkaAdresowa.edytujAdresata();
                        break;
                    case '6':
                        ksiazkaAdresowa.usunAdresata();
                        break;
                    case '7':
                        ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                        break;
                    case '8':
                        ksiazkaAdresowa.wylogowanieUzytkownika();
                        break;
                    default:
                        cout << "Nie ma takiej opcji w menu!" << endl;
                        system("pause");
                        break;
                    }
                }
            }
        }
        break;
        case '9':
            exit(0);
            break;
        default:
            cout << "Nie ma takiej opcji w menu!" << endl;
            system("pause");
            break;
        }
    }
    return 0;
}
