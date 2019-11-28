#include <iostream>
#include <string>
using namespace std;

float Suma(float a, float b);    // deklaracja
float Wieksza(float a, float b);
void napiszLitery(char c, int ile);
float Pole(string figura, float podstawa, float wysokosc);


int main() {    // wywolanie funkcji, ktora zwraca sume dwoch argumentow (4+7 = 11)
    float wynik = Suma(4,7);
    cout << wynik << endl;

    float wieksza = Wieksza(123.34,234.75);
    cout<< wieksza << endl;



    float x, y;
    cin >> x>> y;
    cout<<Wieksza(x,y)<<endl;


    napiszLitery('G', 43);
    cout<< "\n";


    cout<<Pole("prostokat", 10, 22)<<endl;
    cout<<Pole("trojkat", 5, 4)<<endl;




    return 0;
}

float Suma(float a, float b) {  //definicja         // w c++ nie zamienaimy kolejnosci argumentow
    return a + b;   //te zmienne sa zmiennymi lokalnymi, tzn mozna je uzyc tylko w funkcji Suma     //slowem kluczowym return zwracamy wynik funkcji        //return muis sie pojawic conajmniej raz
}

float Wieksza(float a,float b) {    // wewnatrz fun
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    }
}

void napiszLitery(char c, int ile) {
    for(int i = 1; i<= ile; i++) {
        cout<<c<<" ";
    }

}


float Pole(string figura, float podstawa, float wysokosc) {
    float pole = 0;
    if(figura == "prostokat") {
        pole = podstawa * wysokosc;
    } else if(figura == "trojkat") {
        pole = podstawa / 2 * wysokosc;
    }
    return pole;
}
