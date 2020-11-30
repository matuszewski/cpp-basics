/*
    ========================================================
    Krzysztof Matuszewski
    informatyka spec. sieci teleinformatyczne, rok I sem. II
    Podstawy programowania 2 - Laboratorium #2 - Zadanie 2
    ========================================================
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include <iomanip>

#define N 4     // liczba studentow

using namespace std;

struct STUDENT {
    string nazwisko;
    float oceny[3];
    float srednia;
} studenci[N];

// pkt 1
void uzupelnijDaneStudenta(int numer, string nazwisko);
// pkt 2
float sredniaWszystkichStudentow();
// pkt 3
int iloscLepszychOd(float srednia);
// pkt 4
void wyswietlDane();
// pkt 5
string wyswietlNajlepszegoStudenta();
// pkt 6
void wysietlStudenta(string nazwisko);

int main() {
    // potrzebne do pseudolosowania
    srand(time(NULL));

    cout << "Liczba studnetow: " << N << endl;



    // pkt 1 - uzupelnianie nazwisk studentow, losowanie ocen i obliczanie srednich
    cout << endl << "UZUPELNIANIE DANYCH STUDENTOW" << endl;

    for (int i = 0; i < N; i++) {
        cout << endl << "Wprowadz nazwisko studenta do uzupelnienia: " << endl;

        string nazwisko;
        cin >> nazwisko;
        uzupelnijDaneStudenta(i, nazwisko);
    }



    // pkt 2 - srednia ocen wszystkich studentow
    cout << endl << "SREDNIA OCEN WSZYSTKICH STUDENTOW WYNOSI: " << endl;

    float srednia_wszystkich = sredniaWszystkichStudentow();
    cout << srednia_wszystkich << endl;



    // pkt 3 - ilu studentow ma srednia lepsza od sredniej szkoly
    cout << endl << "LICZBA STUDENTOW Z WIEKSZA SREDNIA NIZ POWYZSZA: " << endl;

    int ilosc_najlepszych = iloscLepszychOd(srednia_wszystkich);
    cout << ilosc_najlepszych << endl;



    // pkt 4 - wyswietlic dane wszystkich studentow w sposob czytelny
    cout << endl << "TABLICA Z DANYMI STUDENTOW" << endl;
    wyswietlDane();



    // pkt 5 - wyswietlic dane studenta o najwyzszej sredniej
    cout << endl << "STUDENT Z NAJLEPSZA SREDNIA: " << endl;
    wyswietlNajlepszegoStudenta();



    // pkt 6 - wyswietlanie danych studenta o podanym nazwisku
    cout << endl << "WYSWIETLANIE POSZCZEGOLNEGO STUDENTA" << endl;
    cout << "Podaj naziwsko studenta, ktorego dane chcesz wyswietlic: " << endl;

    string wybor;
    cin >> wybor;
    wysietlStudenta(wybor);

    return 0;
}

// pkt 1 - uzupelnic dane dla N studentow wczytujac nazwisko z klawiatury, oceny losujac ze zbioru {2, 2.5, …, 4.5,5}, srednia obliczona na podstawie ocen
void uzupelnijDaneStudenta(int numer, string nazwisko) {
        
    // przypisz nazwisko
    studenci[numer].nazwisko = nazwisko;

    // losuj oceny
    float wylosowana_ocena = 0;
    float suma = 0;

    for (int i = 0; i < 3; i++) { // dla kazdego miejsca na ocene
        wylosowana_ocena = (rand() % 7 + 4) / 2.0f; // wylosuj ocene od 2.5 do 5

        studenci[numer].oceny[i] = wylosowana_ocena;
        //cout << wylosowana_ocena << ", ";     // wypisz wylosowane oceny

        // potrzebne do policzenia sredniej ocen
        suma += wylosowana_ocena;
    }

    // oblicz srednia
    studenci[numer].srednia = suma / 3.0;
}


// pkt 2 - obliczyc srednia wszystkich ocen wszystkich studentow
float sredniaWszystkichStudentow() {
    float ilosc = 0;
    float suma = 0;

    for (int id_stud = 0; id_stud < N ; id_stud++)
    {
        for (int nr_oceny = 0; nr_oceny < N - 1; nr_oceny++)
        {
            //cout << studenci[id_stud].oceny[nr_oceny] << endl;  // wypisywanie kazdej oceny kazdego studenta
            suma += studenci[id_stud].oceny[nr_oceny];
            ilosc += 1;
        }
    }

    return suma / ilosc;
}

// pkt 3 - obliczyc ile studentow ma srednia powyzej sredniej ocen wszystkich studentow
int iloscLepszychOd(float srednia) {
    int ilosc = 0;

    for (int id_stud = 0; id_stud < N; id_stud++) {
        if (studenci[id_stud].srednia > srednia) {
            ilosc++;
        }
    }

    return ilosc;
}


// pkt 4 - wyswietlic dane wszystkich studentow
void wyswietlDane() {
    // wyswietl naglowek
    cout << "--------------------------------------------------------------" << endl;
    cout << setw(2) << "  Nr" << setw(20) << "Nazwisko" << setw(18) << "Oceny" << setw(18) << "Srednia" << endl;
    cout << "--------------------------------------------------------------" << endl;

    // wyswietl wiersz z danymi studenta
    for (int id_stud = 0; id_stud < N; id_stud++) {

        cout << setw(2) << "| " << id_stud << " |";                     // nr indeksu studenta
        cout << setw(20) << studenci[id_stud].nazwisko << " | ";        // nazwisko studenta
        cout << setw(15);   

        // wypisz oceny
        for (int nr_oceny = 0; nr_oceny < N - 1; nr_oceny++) {
            cout << setw(6) << studenci[id_stud].oceny[nr_oceny] << ',';
        }

        cout << setw(6) << " |  " << setw(4) << roundf(studenci[id_stud].srednia * 100) / 100 << "  | ";    // wypisz srednia zaokraglona do 2 miejsc po przecinku
        cout << endl;
    }
    cout << "--------------------------------------------------------------" << endl;

}

string wyswietlNajlepszegoStudenta() {
    // tymczasowo ustawiamy najlepsza srednia na pierwsza srednia
    float najlepsza_srednia = studenci[0].srednia;
    int id = 0;
    string najlepszy_student = "";

    for (int id_stud = 1; id_stud < N; id_stud++) { // dla kazdego studenta (liczac od drugiego)
        if (studenci[id_stud].srednia > najlepsza_srednia) {

            najlepsza_srednia = studenci[id_stud].srednia;  // jesli jest nowa najlepsza srednia to ja ustaw
            najlepszy_student = studenci[id_stud].nazwisko;
            id = id_stud;   // ustaw jako id, indeks tego studenta, ktory ma najwyzsza srednia
        }
    }
    // wypisywanie danych --------------------------------------------------
    cout << "Nazwisko:\t" << studenci[id].nazwisko << endl;
    cout << "Oceny:\t\t";

    for (int nr_oceny = 0; nr_oceny < N - 1; nr_oceny++) {
        cout << studenci[id].oceny[nr_oceny] << ",   ";
    }
    cout << endl;

    cout << "Srednia:\t" << studenci[id].srednia << endl;
    // koniec wypisywania danych -------------------------------------------

    // w razie potrzeby zrobilem tez tak aby funkcja zwracala nazwisko najlepszego studenta
    return najlepszy_student;
}


// pkt 6 - wyswietlic dane studenta o podanym naziwsku
void wysietlStudenta(string nazwisko) {

    // odstep
    cout << "-----------------------------------" << endl;
    bool znaleziony = false;

    for (int i = 0; i < N; i++) { // dla kazdego studenta
        if (studenci[i].nazwisko == nazwisko) { // sprawdz czy jest podane nazwisko
            znaleziony = true;

            // wypisz nazwisko
            cout << "nazwisko:\t" << studenci[i].nazwisko << endl;

            // wypisz oceny
            cout << "oceny:\t\t";
            for (int j = 0; j < 3; j++) {
                cout << studenci[i].oceny[j] << "\t";
            }

            // wypisz srednia
            cout << endl << "srednia:\t" << studenci[i].srednia << endl;

            // odstep
            cout << "-----------------------------------" << endl;
        }
    }

    if (!znaleziony) {
        cout << "Na liscie nie ma studenta z nazwiskiem: " << nazwisko << endl;

    }
}


