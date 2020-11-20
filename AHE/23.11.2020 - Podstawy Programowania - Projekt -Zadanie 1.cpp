/*
    ========================================================
    Krzysztof Matuszewski
    informatyka spec. sieci teleinformatyczne, rok I sem. II
    Podstawy programowania - Projekt - Zadanie 1
    ========================================================
*/

#include <iostream>

using namespace std;

float wyniki[12] = { -128, 48.5, 72.3, 150.5, -10, 332, 134, 12, 185.9, -54, 100, 332 };
string miesiace[12] = { "styczen", "luty", "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien" };

int max(float tab[], int rozmiar);
int min(float tab[], int rozmiar);
float srednia(float tab[], int rozmiar);
int straty(float tab[], int rozmiar);

int main() {
    bool powtorz = false;

    do {
        // p. 1 - w ktorym miesiacu wynik firmy byl maksymalny, a w ktorym minimalny
        cout << "Najlepszy miesiac to: " << miesiace[max(wyniki, 12) - 1] << endl;
        cout << "Najgorszy miesiac to: " << miesiace[min(wyniki, 12) - 1] << endl;

        // p. 2 - jaki byl wynik sredni
        cout << "Sredni zysk w skali roku wyniosl: " << srednia(wyniki, 12) << endl;

        // p. 3 - ile razy firma zanotowala straty i w jakich miesiacach
        cout << "\nSTRATY:" << endl;
        cout << "Firma zanotowala straty " << straty(wyniki, 12) << " razy" << endl;



        // p. 4 - mozliwa poprawa danych w programie i ponowne jego wykonywanie
        cout << "-----------------------------------------------------" << endl;
        cout << "Czy chcesz poprawic dane z koregos miesiaca? Wybierz:" << endl;
        cout << "[0] Nie\n[1] Tak" << endl;
        int wybor;
        cin >> wybor;

        switch (wybor) {
        default:
            break;
        case 0:
            return 0;
            break;
        case 1:
            powtorz = true; // sprawiamy zeby program wszedl w tryb dzilania powtornego
            system("cls"); // czyscimy konsole

            bool nieprawidlowy_miesiac = false;
            do {
                // wpisywanie miesiaca
                cout << "Wybierz miesiac do poprawy (od 1 do 12): " << endl;
                int numer_miesiaca;
                cin >> numer_miesiaca;

                // sprawdzamy czy podano numer miesiaca od 1 do 12
                if (numer_miesiaca < 1 || numer_miesiaca > 12) {
                    cout << "Wpisz poprawny numer miesiaca od 1 do 12!" << endl;
                    nieprawidlowy_miesiac = true;
                }
                else {
                    cout << "Popraw wartosc: " << wyniki[numer_miesiaca - 1] << ":  " << endl;
                    float nowa_wartosc;
                    cin >> nowa_wartosc;
                    wyniki[numer_miesiaca - 1] = nowa_wartosc;
                    break; // jesli wszystko przebiegnie zgodnie z planem, przerwij petle
                }

            } while (nieprawidlowy_miesiac);

            break;
        }
    } while (powtorz);
    return 0;
}

/*
    Program jest modulowy, rozpisany na funkcje,
    mozna dodawac z latwoscia do niego kolejne funkcje jak liczenie mediany bπdü sume zyskow, sume strat itp.
    Ponizej funkcje sprawdzajace kolejno:
    - miesiac z najlepszym zyskiem
    - miesiac z nawieksza strata
    - sredni miesieczny wynik finansowy firmy z ostatniego roku
    - liczba strat i w jakich miesiacach
*/

int max(float tab[], int rozmiar) {
    float najlepszy_wynik = 0;
    int najlepszy_miesiac = 1;

    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] > najlepszy_wynik) {
            najlepszy_wynik = tab[i];
            najlepszy_miesiac = i+1;
        }
    }

    return najlepszy_miesiac;
}

int min(float tab[], int rozmiar) {
    float najgorszy_wynik = tab[0];
    int najgorszy_miesiac = 1;

    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] < najgorszy_wynik) {
            najgorszy_wynik = tab[i];
            najgorszy_miesiac = i + 1;
        }
    }

    return najgorszy_miesiac;
}

float srednia(float tab[], int rozmiar) {
    float srednia = 0;
    float suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }

    srednia = suma / rozmiar;

    return srednia;
}

int straty(float tab[], int rozmiar) {
    int ile_razy_strata = 0;

    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] < 0) {
            ile_razy_strata++;
            cout << miesiace[i + 1] << "   " << tab[i] << endl;
        }
    }
    return ile_razy_strata;
}
