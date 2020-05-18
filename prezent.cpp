#include <iostream>

using namespace std;

int main() {
	int wielkosc = 17;
	char x = 'W';

	for (int i = 0; i <= wielkosc - 5 / 2 - 1; i++) {
		cout << " ";
	}
	cout << "_   _" << endl;
	for (int i = 0; i <= wielkosc - 7/2 -1; i++) {
		cout << " ";
	}
	cout << "((\\o/))" << endl;


	for (int i = 0; i < wielkosc; i++) {
		if (i == wielkosc / 2) {
			for (int k = 0; k < wielkosc; k++) {
				cout << " .";
			}
			cout << endl;
		} else {

			for (int j = 0; j < wielkosc; j++) {
				if (j == wielkosc / 2) {
					cout << " .";
				}
				else { cout << " " << x; }
			}
			cout << endl;
		}
	}
	return 0;
}
