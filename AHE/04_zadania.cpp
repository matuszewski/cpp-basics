#include <iostream>

using namespace std;

int main() {
	int tryb = 0;		// co program ma wykonac
	int dzialanie = 1;  // czy ma dzialac czy sie zakonczyc

	// 1
	int n; // ile wyrazow sumy

	// 2
	int LW; // liczba wierszy  (wysokosc wzoru)

	// 3
	int N1; // wielkosc tabliczki mnozenia

	// 4
	int x, y; // podstawa potegi i wykladnik potegi


	do {
		cout << "Wybierz co chcesz zrobic:" << endl;
		cout << "[1] Suma\n[2] Trojkat\n[3] Tabliczka mnozenia\n[4] Potegowanie\n[0] Wyjscie" << endl;
		cin >> tryb;


		switch (tryb) {
		case 1:	// SUMA
			cout << "Obliczanie sumy ze wzoru \n Podaj n" << endl;
			do {
				cin >> n;

				if (n >= 1) {
					float s = 0;

					for (int i = 1; i < n; i++) {
						s += (float(i) + 1.0) / (2.0 * float(i) * float(i) + 1.0);
					}

					cout << "Obliczona suma = " << s << endl;
					break;
				}
				else if (n < 1) {
					cout << "n jest mniejsze od 1! Wprowadz n wieksze badz rowne 1" << endl;
					continue;
				}

			} while (n < 1);
			break;



		case 2: // TROJKAT
			cout << "Rysowanie trojkata" << endl;
			cout << "Wprowadz wysokosc trojkata: " << endl;
			cin >> LW;

			for (int i = 0; i <= LW; i++) {
				for (int j = 0; j < i; j++) {
					cout << '*';
				}
				cout << endl;
			}
			break;




		case 3: // TABLICZKA MNOZENIA
			cout << "Tabliczka mnozenia" << endl;
			cout << "Wprowadz wielkosc tabliczki mnozenia (max 10)" << endl;
			cin >> N1;

			if (N1 <= 10 && N1 > 0) {

				for (int i = 1; i <= N1; i++) {


					for (int j = 1; j <= N1; j++) {
						cout.width(3);
						cout << j * i << ' ';
					}
					cout << endl;
				}
			}
			else {
				cout << "Wprowadzona wielkosc tabliczki mnozenia jest niepoprawna! Przerywanie" << endl;
				break;
			}

			break;




		case 4: // POTEGOWANIE
			cout << "Potegowanie" << endl;

			cout << "Wprowadz podstawe potegi: " << endl;
			cin >> x;

			cout << "Wprowadz wykladnik potegi: ( wiekszy lub rowny 0 ): " << endl;
			cin >> y;

			if (y > 0) {
				int a = x; // zmienna pomocnicza - podstawa potegi
				// x ^ y = x * x * x ( y razy)

				for (int i = 1; i < y; i++) {
					x = x * a;

				}
				cout << "Wynik potegowania = " << x << endl;
			}
			else if (y == 0) {
				cout << "Wynik potegowania = 0 " << endl;
			}
			else {
				cout << "Wprowadzono bledny wykladnik! Przerywanie" << endl;
				break;
			}
			break;

		default:
			cout << "Nie rozumiem" << endl;
			break;
		}

		cout << endl << "-----------------------------------\nCzy powtorzyc?\n[1] Tak\n[0] Nie" << endl;
		cin >> dzialanie;

	} while (dzialanie == 1);
	
	cout << "Koniec programu" << endl;
	return 0;
}
