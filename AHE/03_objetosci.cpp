#include <iostream>

using namespace std;

int main() {

	cout << "Podaj liczbe:" << endl;

	cout << "[1] obliczanie objetosci kuli" << endl;
	cout << "[2] obliczanie objetosci stozka" << endl;
	cout << "[3] obliczanie objetosci prostopadloscianu" << endl;
	

	int tryb;
	cin >> tryb;


	if (tryb != 1 && tryb != 2 && tryb != 3) {
		cout << "Nie rozumiem!" << endl;

	}
	else {
		float v, r, H;
		float Pi = 3.14159;

		switch (tryb) {
			case 1:
				cout << endl << "Obliczanie objetosci kuli" << endl;

				cout << "Podaj promien r = "; cin >> r;
				
				v = (4.0 / 3) * Pi * pow(r, 3);

				cout << "Objetosc kuli wynosi V = " << v << endl;
				break;



			case 2:
				cout << endl << "Obliczanie objetosci stozka" << endl;

				cout << "Podaj promien r = "; cin >> r;
				cout << "Podaj wysokosc H = "; cin >> H;

				v = (1.0 / 3) * Pi * pow(r, 2) * H;

				cout << "Objetosc stozka wynosi V = " << v << endl;
				break;



			case 3:
				cout << endl << "Obliczanie objetosci prostopadloscianu" << endl;

				float a, b, c;
				cout << "Podaj dlugosci bokow:" << endl;
				cout << "a = "; cin >> a;
				cout << "b = "; cin >> b;
				cout << "c = "; cin >> c;

				v = a * b * c;

				cout << "Objetosc prostopadloscianu wynosi V = " << v << endl;
				break;
		}
	}
	

	return 0;
}
