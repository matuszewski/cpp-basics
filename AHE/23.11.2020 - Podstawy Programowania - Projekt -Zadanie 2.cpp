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

// stan konta z jakim zaczynamy
int pieniadze = 100;

void wygrana() {
    cout << "WYGRANA! :)" << endl;
    pieniadze += 10;
    cout << "[+] Dodano 10PLN, stan konta to " << pieniadze << "PLN" << endl;
}

void przegrana() {
    cout << "PRZEGRANA :(" << endl;
    pieniadze -= 10;
    cout << "[-] Odejeto 10PLN, stan konta to " << pieniadze << "PLN" << endl;
}


int main() {

    // przygotowanie
    srand(time(0)); // w celu losowania
    int rzut1, rzut2, suma, punkty;
    punkty = 0;
    bool walka_o_punkty = 0; // tryb walki o punkty (wtedy gdy gracz musi trafic liczbe punktow, ktora wczesniej wylosowal)

    cout << "=============\nGRA W KOSCI\n=============" << endl << endl;
    cout << "Poczatkowy stan konta " << pieniadze << "PLN" << endl;

    do {
        // czy wykonac rzut/kolejny rzut?
        cout << endl << "[1] Wykonaj rzut\n[0] Wyjdz z gry" << endl;
        int dalej;
        cin >> dalej;
        if (dalej != 1) { break; } // jezeli gracz wybierze cokolwiek innego niz 1 - zakoncz gre

        // rzut koscmi czyli dwa losowania od 1 do 6
        rzut1 = (rand() % 6 + 1);
        rzut2 = (rand() % 6 + 1);

        // policzenie sumy punktow
        suma = rzut1 + rzut2;

        // wypisanie wynikow i sumy
        cout << "Wyrzuciles liczby {" << rzut1 << "," << rzut2 << "} a suma punktow to " << suma << endl;

        // TRYB WALKI ===================================================================================
        if (walka_o_punkty) {
            if (suma == punkty) { // jezeli suma bedzie rowna punktom - gracz moze kontynuowac
                walka_o_punkty = 0;
                cout << "Wyszedles z walki o punkty! :)" << endl;
            }
            else if (suma == 7) { // jezeli suma bedzie rowna 7 podczas walki o punkty - gracz przegrywa

                cout << "Trafiles 7 podczas walki o punkty!" << endl;
                przegrana();

                if (pieniadze <= 0) {
                    cout << "KONIEC GRY" << endl;
                    cout << "Stan konta " << pieniadze << "PLN" << endl;
                    return 0;
                }
            }
        // TRYB ZWYKLY =================================================================================
        } else {
            // jezeli suma przy pierwszym rzucie wynosi 7 lub 11 - gracz wygyrwa
            if (suma == 7 || suma == 11) {
                wygrana();
                // jezeli suma przy pierwszym rzucie wynosi 2, 3 lub 12 - gracz przegrywa
            }
            else if (suma == 2 || suma == 3 || suma == 12) {
                przegrana();
                if (pieniadze <= 0) {
                    cout << "KONIEC GRY" << endl;
                    cout << "Stan konta " << pieniadze << "PLN" << endl;
                    return 0;
                }
            }
            else { // w kazdym innym przypadku - suma staje sie punktami gracza
                punkty = suma;

                cout << "\nWalka o punkty, wymagana suma: [" << punkty << "]\nChcesz kontynuowac?\n[1] Tak\n[0] Nie\n";
                int walka;
                cin >> walka;

                cout << endl << endl;
                
                if (walka != 1) {
                    walka_o_punkty = false; // przy nastepnej iteracji petli ma sie wykonac tryb zwykly
                    cout << "KONIEC GRY" << endl;
                    cout << "Stan konta " << pieniadze << "PLN" << endl;
                    return 0;
                }
                else {
                    walka_o_punkty = true; // przy nastepnej iteracji petli ma sie wykonac tryb walki
                }
            }
        }
    } while (true); // wychodzenie z tej petli odbbywa sie tylko i wylacznie slowem kluczowym break

    cout << "KONIEC GRY" << endl;
    cout << "Stan konta " << pieniadze << "PLN" << endl;

    return 0;
}
