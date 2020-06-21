#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>

using namespace std;


// zadanie 1.1
int losowanie(int p, int k, int& suma){
	int przedzial = k - p + 1;

	int wylosowane_liczby[100];

	int ilosc_nieparzystych = 0;
	int suma_nieparzystych = 0;
	
	for (int i = 0; i < 100; i++) {

		// wylosuj kolejna liczbe
		wylosowane_liczby[i] = (rand() % (przedzial)) + p;

		//cout << "<" << wylosowane_liczby[i] << "> "; // dla testu, czy generuja sie liczby

		if (wylosowane_liczby[i] % 2 == 1) {	// jezeli dana liczna jest nieparzysta, dodaj ja do sumy liczb nieparzystych
			// zwieksz ilosc o jeden
			ilosc_nieparzystych++;
			// dodaj kolejna liczbe do sumy
			suma_nieparzystych += wylosowane_liczby[i];
		}
	}



	//srand(static_cast <unsigned> (time(0)));
	//float r = p + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (k - p)));
	suma = suma_nieparzystych;
	return ilosc_nieparzystych;
}

// zadanie 2.1
void losuj(int t[], int N) {
	for (int i = 0; i < N; i++) {
		// wylosuj kolejna liczbe
		t[i] = (rand() % (30 - (-5))) + (-5);
	}
}

// zadanie 2.2
void wypisz(int t[], int N) {
	for (int i = 0; i < N; i++) {
		cout << t[i] << ' ';
	}
}

// zadanie 2.3
float srednia(int t[], int N) {
	int suma_dodatnich = 0;
	int liczba_dodatnich = 0;

	for (int i = 0; i < N; i++) {
		if (t[i] > 0) { // jezeli element tablicy jest dodatni
			suma_dodatnich += t[i];
			liczba_dodatnich++;
		}
	}

	return (float)suma_dodatnich / (float)liczba_dodatnich; // srednia arytmetyczna dodatnich elementow
}

// zadanie 2.4
int ile_razy(int t[], int N, int szukana) {
	int ile = 0;
	
	for (int i = 0; i < N; i++) {
		if (t[i] == szukana) {
			ile++;
		}
	}
	return ile;
}

// zadanie 2.5
int maksymalnyElement(int t[], int N, int& wystapienia) {
	int element_maksymalny = t[0];

	// znajduje element maksymalny podanej tablicy
	for (int i = 0; i < N; i++) {
		if (t[i] > element_maksymalny) {
			element_maksymalny = t[i];
		}
	}

	wystapienia = 0;
	
	// liczy wystapienia najwiekszego elementu tablicy
	for (int i = 0; i < N; i++) {
		if (t[i] == element_maksymalny) {
			wystapienia++;
		}
	}
	
	return element_maksymalny;
}


int main() {
	srand(time(NULL));

	const int N = 10;
	int A[N], B[N];



	// zadanie 1.1
	int suma = 0;
	int p = 0;
	int k = 0;
	
	cout << "Zadanie 1.1\nPodaj przedzial do losowania: p k" << endl;
	cin >> p >> k;
	cout << "ilosc liczb nieparzystych: " << losowanie(p, k, suma) << endl; // return
	cout << "suma liczb nieparzystych: " << suma << endl; // referencja
	cout << "---------------------------------------" << endl << endl;



	cout << "Zadania 2.1 i 2.2" << endl;
	// zadanie 2.1 - wylosowanie z zakresu <-5; 29> N liczb i umieszczenie ich w tablicach A i B
	losuj(A, N);
	losuj(B, N);

	// zadanie 2.2 - wypisanie zawartosci tablic A i B
	cout << "A = [ ";
	wypisz(A, N);

	cout << "]\nB = [ ";
	wypisz(B, N);

	cout << "]" << endl << endl;
	cout << "---------------------------------------" << endl << endl;



	cout << "Zadanie 2.3" << endl;
	// zadanie 2.3 - dla tablicy A wypisac funkcja srednia arytmetyczna dla elementow dodatnich 
	cout << "Srednia arytmetyczna dodatnich elementow tablicy A: " << srednia(A, N) << endl << endl;
	cout << "---------------------------------------" << endl << endl;



	cout << "Zadanie 2.4" << endl;
	// zadanie 2.4 - ile razy szukana liczba pojawia sie w tablicy

	int szukana = 0;

	cout << "Podaj liczbe ktora chcesz wyszukac (w tablicy A): " << endl; // oczywiscie mozna tez wywolac funkcje ile_razy(B, N, szukana) dla tablicy B
	cin >> szukana;
	cout << "Liczba " << szukana << " wystepuje w tablicy A " << ile_razy(A, N, szukana) << " razy." << endl << endl;
	cout << "---------------------------------------" << endl << endl;



	cout << "Zadanie 2.5" << endl;
	// zadanie 2.5 - element maksymalny tablicy B i ile razy wystapil

	int ilosc = 0;
	cout <<"Element maksymalny w tablicy B wynosi: " << maksymalnyElement(B, N, ilosc) << endl; // return
	cout << "Wystepuje " << ilosc << " razy." << endl << endl; // referencja
}
