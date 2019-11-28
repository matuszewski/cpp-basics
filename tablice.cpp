#include <iostream>

using namespace std;

int main() {
    int tablica[5] = {6,7,2,9,1};
    //tablice znakowe troche inaczej

    cout<<"rozmiar tablicy = "<<sizeof(tablica)<<endl;
    cout<<"rozmiar elementu = "<<sizeof(tablica[0])<<endl;
    cout<<"liczba elementow tablicy = "<<sizeof(tablica) / sizeof(tablica[0])<<endl;




    for(int i = 0; i<5;i++) {           // wypisanie calej tablicy
        cout<<tablica[i]<<" ";
    }




    cout<<endl;




    int tab[5] = {1,2,3};                                   // dostep do elementow tablicy
    cout<<tab[0] << " " << tab[1] << " " << tab[4] <<endl;

    tab[4] = 1000;
    cout<<tab[0] << " " << tab[1] << " " << tab[4] <<endl;




    cout<<endl;




    for(int  i = 0; i<5; i++) {                 //wpisywanie wartosci do tablicy
        cout<<"wpisz "<<i+1<<" liczbe: "<<endl;
        cin>>tab[i];
    }

    for(int i = 0; i<5;i++) {
        cout<<tab[i]<<" ";
    }




    // rozmiar tablicy statycznej powinien byc stala const
    // tablica statyczna powinna miec jednoznacznie zdefiniowany staly rozmiar
    const int stala = 7;
    int tablica2[stala] = { 2, 4, 6, 8, 10, 12, 14 };

    //tablica dynamiczna
    //bedzie potem


    const int rozmiar3 = 6;                     // sumowanie elementow tablicy
    int suma = 0;
    int tablica3[rozmiar3] = {1,4,3,3,6,8};

    for(int i = 0; i<rozmiar3; i++) {
        suma+=tablica3[i];
    }
    cout<<endl<<suma<<endl;


    const int rozmiar4 = 6;                     // sumowanie ujemnych elementow tablicy
    int suma_ujemnych = 0;
    int tablica4[rozmiar4] = {1,4,-3,3,-6,-8};

    for(int i = 0; i<rozmiar4; i++) {
        if(tablica4[i] < 0) {
            suma_ujemnych+=tablica4[i];
        }
    }
    cout<<endl<<suma_ujemnych<<endl<<endl;




    //tablice znakowe
    char napis1[4] = {'d', 'u', 'p', 'a'};
    char napis2[6] = "hello";   // 6 ZNAKOW
    // bo cudzyslow mowi ze ma byc dodany znak konca lancucha

    char napis3[] = {'d', 'u', 'p', 'a','\0'};  // apostrof nie ma znaku konca lini \0
    char napis4[] = "duppa";

    cout<<endl<< napis3;

    // suma konkretnego znaku napisu





    //gcount
    char g[] = "Hello";
    cin.getline(g, 5);
    cout<< cin.gcount();







    return 0;

}
