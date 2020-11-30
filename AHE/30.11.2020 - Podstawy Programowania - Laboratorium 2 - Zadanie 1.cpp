/*
    ========================================================
    Krzysztof Matuszewski
    informatyka spec. sieci teleinformatyczne, rok I sem. II
    Podstawy programowania 2 - Laboratorium #2 - Zadanie 1
    ========================================================
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

void losuj(float tablica[][8], int rozmiar);
void wypisz(float tablica[][8], int rozmiar);
float liczSrednia(float tablica[][8], int rozmiar);

int main() {
	// potrzebne do pseudolosowania
	srand(time(NULL));


	// p.0 deklarowanie tablic
	float A[8][8], B[5][8], C[8], D[5];


	// p.1 wylosowanie elementow tablic A i B
	losuj(A, 8);
	losuj(B, 5);


	// p.2 wypisanie elementow tablic A i B
	cout << "Tablica A:" << endl;
	wypisz(A, 8);
	cout << endl << "Tablica B:" << endl;
	wypisz(B, 5);


	// p.3 srednia arytmetyczna
	cout << endl << endl << "Srednia elementow tablicy A pod jej glowna przekatna: " << liczSrednia(A, 8) << endl;


	// p.4 jednowymiarowa tablica C, bedaca sumami kolumn tablicy B
	// wypelnienie tablicy C zerami
	for (int i = 0; i < 8; i++) {
		C[i] = 0;
	}

	// wypelnienie tablicy C sumami
	for (int j = 0; j < 8; j++) {
		for (int i = 0; i < 5; i++) {
			C[j] += B[i][j];
		}
	}

	// wypisanie tablicy C
	cout << endl << "Tablica C zawierajaca sumy kolumn tablicy B:" << endl;
	for (int i = 0; i < 8; i++) {
		cout << setw(6) << C[i] << " ";
	}
	cout << endl;


	// p.5 jednowymiarowa tablica D, bedaca elementami minimalnymi wierszy tablicy B
	// wypelnienie tablicy D zerami
	for (int i = 0; i < 5; i++) {
		D[i] = 0;
	}	

	// wypelnienie tablicy D najmniejszymi elementami wierszy z tablicy B
	for (int i = 0; i < 5; i++) {
		float najmniejszy = B[i][0];

		for (int j = 0; j < 8; j++) { 
			//cout << B[i][0] << " ";		// wypisz wszystkie elementy z danej kolumny tablicy B
			if (B[i][j] < najmniejszy) {
				najmniejszy = B[i][j];
			}
		}
		//cout << najmniejszy;		// wypisz najmniejszy element z danej kolumny tablicy B
		D[i] = najmniejszy;
	}
	
	// wypisanie tablicy D
	cout << endl << "Tablica D zawierajaca minimalne elementy wierszow tablicy B:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << setw(6) << D[i] << " ";
	}
	cout << endl;



	// p.6 uporzadkowanie malejaco elementow na przekatnej w tablicy A, wypisanie tablicy A
	float tymczasowa[8]; // stworzenie tymczasowej tablicy do przechowywania elementow na przekatnej i operacji na nich

	// wyciagniecie do tymczasowej tablicy liczb z przekatnej tablicy A
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i == j) {
				//cout << A[i][j] << " ";	// wypisz liczby z przekatnej
				tymczasowa[i] = A[i][j];
			}
		}
	}

	// sortowanie malejace tymczasowej tablicy
	for (int j = 0; j < 8; j++) {					// oczywiscie niewydajne ale proste sortowanie babelkowe
		for (int i = 0; i < 8; i++) {
			if (tymczasowa[i + 1] > tymczasowa[i])
			{
				// zamiana miejscami
				float t = tymczasowa[i];
				tymczasowa[i] = tymczasowa[i + 1];
				tymczasowa[i + 1] = t;
			}
		}
	}

	// wpisanie do tablicy A uszeregowanej przekatnej z tymczasowej tablicy
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i == j) {
				A[i][j] = tymczasowa[i];
			}
		}
	}
	cout << endl;
	cout << "Tablica A z uporzadkowanymi elementami na przekatnej malejaco:" << endl;
	wypisz(A, 8);



	return 0;
}
// do pkt 1
void losuj(float tablica[][8], int rozmiar) {

	for (int i = 0; i < rozmiar; i++) {

		for (int j = 0; j < 8; j++) {
			tablica[i][j] = round((rand() % 51)) / 10.0;
			//cout << tablica[i][j] << " ";
		}
		//cout << endl;
	}
}

// do pkt 2
void wypisz(float tablica[][8], int rozmiar) {

	for (int i = 0; i < rozmiar; i++) {
		for (int j = 0; j < 8; j++) {
			cout << setw(6) << tablica[i][j] << " ";
		}
		cout << endl;
	}
}

// do pkt 3
float liczSrednia(float tablica[][8], int rozmiar) {
	float ilosc = 0;	// ilosc elementow znajdujacych sie pod glowna przekatna
	float suma = 0;		// suma ich wartosci
	float srednia = 0;  // srednia arytmetyczn tych elementow

	for (int i = 0; i < rozmiar; i++) {
		for (int j = 0; j < i; j++) {
			suma += tablica[i][j];

			ilosc++;
			//cout << " (" << i << ',' << j << ") ";	// do wypisywania wspolrzednych elementow pod przekatna(uwaga do pkt3)
			//cout << tablica[i][j] << ", ";			// do wypisywania poszczegolnego elementu
		}
	}
	srednia = suma / ilosc;
	return srednia;
}

