/*
    ========================================================
    Krzysztof Matuszewski
    informatyka spec. sieci teleinformatyczne, rok I sem. II
    Podstawy programowania - Projekt - Zadanie 2
    ========================================================
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void wygrana() {
    cout << "WYGRANA! :)" << endl;
}

void przegrana() {
    cout << "PRZEGRANA :(" << endl;
}

int main() {

    // przygotowanie
    srand(time(0));
    int rzut1, rzut2, suma, punkty;
    punkty = 0;
    bool walka_o_punkty = 0;

    cout << "GRA W KOSCI" << endl;
    cout << "---------------------" << endl << endl;

    do {
        // czy wykonac kolejny rzut?
        cout << endl << "Wykonaj rzut - Enter" << endl;
        cin.ignore();

        // rzut koscmi
        rzut1 = (rand() % 6 + 1);
        rzut2 = (rand() % 6 + 1);



        // policzenie sumy punktow
        suma = rzut1 + rzut2;

        // wypisanie wynikow i sumy
        cout << "Wyrzuciles liczby {" << rzut1 << "," << rzut2 << "} a suma punktow to " << suma << endl;

        if (walka_o_punkty) {
            if (suma == punkty) { // jezeli suma bedzie rowna punktom - gracz moze kontynuowac
                walka_o_punkty = 0;
                cout << "Wyszedles z walki o punkty! :)" << endl;
            }
            else if (suma == 7) { // jezeli suma bedzie rowna 7 podczas walki o punkty - gracz przegrywa
                cout << "Trafiles 7 podczas walki o punkty!" << endl;
                przegrana();
                break;
            }
        }
        else {
            // jezeli suma przy pierwszym rzucie wynosi 7 lub 11 - gracz wygyrwa
            if (suma == 7 || suma == 11) {
                wygrana();
                break;
                // jezeli suma przy pierwszym rzucie wynosi 2, 3 lub 12 - gracz przegrywa
            }
            else if (suma == 2 || suma == 3 || suma == 12) {
                przegrana();
                break;
                // w kazdym innym przypadku - suma staje sie punktami gracza
            }
            else {
                punkty = suma;
                cout << endl;
                cout << "Walka o punkty, wymagana suma: [" << punkty << ']' << endl;
                cout << "Chcesz kontynuowac?\n[1] Tak\n[0] Nie" << endl;
                cin >> walka_o_punkty;
                cout << endl << endl;
                if (!walka_o_punkty) {
                    break;
                }
            }
        }
       

    } while (true); // wychodzenie z tej petli odbbywa sie tylko i wylacznie slowem kluczowym break

    return 0;
}
