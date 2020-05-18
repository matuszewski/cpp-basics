#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	float a, b, c;	// wspolczynniki
	float delta, x1, x2;	// delta, pierwiastki
	
	cout << "Obliczanie miejsc zerowych funkcji kwadratowej" << endl;
	cout << "Podaj wspolczynniki: " << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	
	if (a != 0) {
		delta = pow(b, 2) - 4*a*c;
	
		if (delta > 0) {
			x1 = (-b - sqrt(delta)) / 2*a;
			x2 = (-b + sqrt(delta)) / 2*a;
			
			cout << "Istnieja 2 miejsca zerowe:" << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
	
		} else if (delta == 0) {
			x1 = -b / 2*a;
			
			cout << "Istnieje 1 miejsce zerowe:" << endl;
			cout << "x = " << x1 << endl;
			
		} else {
			cout << "Brak miejsc zerowych rowniania w zbiorze liczb rzeczywistych!" << endl;
		}
		
		//float y = a*pow(x, 2) + b*x + c;	// wzor funkcji kwadratowej
		
		
	} else {
		cout << "Wspolczynnik a jest rowny 0, funkcja nie jest funkcja kwadratowa!" << endl;
	}
	
	system("PAUSE");
	
	
	return 0;
}
