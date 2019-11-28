#include <iostream>

using namespace std;

//int main(int argn, char* argv[])

int main() {
    cout << "Hello world!" << endl;

    /*
        Zmienna sk³ada siê z komurek pamiêci, wiêc nie ustawienie wartoœci pocz¹tkowej mo¿e spowodowaæ ¿e bêdzie mia³a wartoœæ z poprzedniego u¿ycia komórki przez RAM.
    */

    // deklaracja zmiennej
    int zmienna;

    //definicja zmiennej
    int zmienna1 = 23;


    // zmienne typu ca³kowitego
    char znak = 'a';                // 1 bajt
    char znak2 = 65;                // 1 bajt
    int liczba1 = 123;              // 4 bajty
    short int liczba2 = 344;        // 2 bajty
    long int liczba3 = 1231;        // 8 bajtów
    long long int liczba4 = 123;    // 16 bajtów

    // zmienne zmiennoprzecinkowe
    float liczba_rzeczywsita1 = 123123.3434;
    double liczba_rzeczywsita2 = 234234.234;

    // zmienna typu logicznego
    bool typLogiczny = true;    // 1 bajt

    //stale
    const int stala = 345546;

    //unsigned / signed


    //dodawanie
    int x = 12, y = 24;
    int suma = x + y;
    cout<< x << " + " << y << " = "<< suma<<endl;

    cout<<endl;

    //kod ascii odpowiada literom
    char litera1 = 'A'; //litera
    char litera2 = 65;  //kod ASCII litery
    //cout<< litera1 <<", "<< litera2 <<endl;

    float rzeczywista1 = 213.3432153;
    float rzeczywista2 = 56.45;
    float notacjanaukowa1 = 1.0e-8;     //1^-8
    float notacjanaukowa2 = 2.0e+5;   //2^5
    //cout<<rzeczywista1 / rzeczywista2 <<endl;
    //cout<<notacjanaukowa1<<endl<<notacjanaukowa2<<endl;

    //rzutowanie typów
    double iloczyn = (double)notacjanaukowa1 + notacjanaukowa2; //ogólnie lepiej operacje wykonywac na zmiennych tego samego typu

    //cin i cout

    float rzecz1;
    //cin >> rzecz1;
    //cout<< rzecz1+100;

    cout<<endl;



    cout<<"Wpisz litere:"<<endl;
    cin>>znak2;
    cout<<"Wpisales litere ["<<znak2<<"]"<<endl<<endl;


    float n, m;
    cout<<"Wpisz pierwsza liczbe: ";
    cin>>n;
    cout<<endl<<"Wpisz druga liczbe: ";
    cin>>m;

    cout<<n<<" + "<<m<<" = "<<n+m<<endl;
    cout<<n<<" - "<<m<<" = "<<n-m<<endl;
    cout<<n<<" / "<<m<<" = "<<n/m<<endl;
    cout<<n<<" * "<<m<<" = "<<n*m<<endl;







    return 0;
}

