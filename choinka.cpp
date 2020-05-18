#include <iostream>

using namespace std;

int main() {
	char x = 'X';

	cout << "Podaj wysokosc choinki (poziom 3+)" << endl;
	

	int wysokosc = 3;
	cin >> wysokosc;
	cout << endl;
	int max_znakow = wysokosc * 2 - 1;	// Najwieksza liczba znakow X w poziomie (ostatnim poziomie - 9)

	int spacje = 0;
	int znaki = 0;

	for (int i = 1; i <= wysokosc; i++) {
			znaki = i * 2 - 1;	//liczba znakow X w poziomie ( 1, 3, 5, 7, 9, ...)
			
			spacje = max_znakow / 2 - (i - 1);		// 9 / 2 = 4	- 0 = 4
													// 9 / 2 = 4	- 1 = 3
													// 9 / 2 = 4	- 2 = 2
			
				
			for (int k = 1; k <= spacje; k++) {
				cout << " ";
			}

			for (int k = 1; k <= znaki; k++) {
				cout << x;
			}

			for (int k = 1; k <= spacje; k++) {
				cout << " ";
			}
			
		
		cout << endl;
		if (i == wysokosc) {
			for (int j = 1; j <= max_znakow / 2 - 1; j++) {
				cout << " ";
			}
			for (int i = 1; i <= 3; i++) {
				cout << x;
			}
		}
	}

	return 0;
}
