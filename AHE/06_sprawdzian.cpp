#include <iostream>

using namespace std;

// srednia arytmetyczna elementow podzielnych przez 3
float srednia(int tab[], int rozmiar) {

	int suma_podzielnych = 0;
	int ilosc_podzielnych = 0;
	float srednia = 0.0;

	for (int i = 0; i < rozmiar; i++) {
		if (tab[i] % 3 == 0) {
			// jezeli liczba jest podzielna przez 3:
			ilosc_podzielnych++; // inkrementuj
			suma_podzielnych += tab[i];
		}
	}

	srednia = float(suma_podzielnych) / float(ilosc_podzielnych);

	return srednia;
}


int suma(int N) {
	int S = 0;

	for (int z = 2; z <= N; z++) {
		// wzor sumy
		S += (z + 1) / 2 * z * z;
	}

	return S;
}

int main() {
	int C[4] = { -2, 3, -5, 6 };
	int D[6] = { -2, 3, 4, 6, -88 , 99 };

	
	cout << "Srednia podzielnych przez 3 elementow z tablicy C: " << srednia(C, 4) << endl;
	cout << "Srednia podzielnych przez 3 elementow z tablicy D: " << srednia(D, 6) << endl;


	cout << "---------------------------------------------------------" << endl;
	


	int N = 0;

	cout << "Wpisz parametr N: " << endl;
	cin >> N;
	cout << "Wynik: " << suma(N) << endl;

	return 0;
}