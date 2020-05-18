#include <iostream>
#include <math.h>

using namespace std;

int main() {

    // zadanie 1 - wypisanie imienia i nazwiska studenta
    cout << "Krzysztof Matuszewski" << endl;

    // zadanie 2 - zamiana mil morskich na metry
    float mile, metry;
    cout << "Podaj odleglosc w milach morskich: " << endl;
    cin >> mile;

    metry = mile * 1852;
    cout << "Jest to dokladnie " << metry << " metrow." << endl;

    cout << endl;

    // zadanie 3 - obliczenie V i Pb sto�ka
    float Pi = 3.14;    // liczba Pi
    float r = 10;       // promien stozka
    float H = 15;       // wysokosc stozka
    float L = 8;        // obwod stozka


    float V = (1.0 / 3) * Pi * pow(r, 2) * H;   // wzor na objetosc stozka
    float Pb = Pi * r * L;  // wzor na pole powierzchni bocznej stozka

    cout << "Objetosc stozka V = " << V << "" << endl;
    cout << "Pole powierzchni bocznej stozka Pb = " << Pb << "" << endl;

    // zadanie 4 - porownywanie liczb
    int a, b, c;
    cout << endl << "Wprowadz 3 liczby calkowite" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << "Najwieksza jest liczba " << a << endl;
    }
    else if (b > a&& b > c) {
        cout << "Najwieksza jest liczba " << b << endl;
    }
    else {
        cout << "Najwieksza jest liczba " << c << endl;
    }

    system("PAUSE");


}
