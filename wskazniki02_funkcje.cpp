#include <iostream>

using namespace std;
void WypiszTablice(float *t, int r);
float PomnozWszystko(float *t, int r);
void ZmienKolejnosc(float *t, int r);
void WprowadzWartosciTablicy(float *t, int r);
int liczWiekszeOdZera(float *t, int r);

int main() {
    int rozmiar = 5;
    float tablica[5] = {3,-3,0,-11,15};
    //cout<<PomnozWszystko(tablica,rozmiar);
    //ZmienKolejnosc(tablica,rozmiar);

    WypiszTablice(tablica,rozmiar);
    //WprowadzWartosciTablicy(tablica, rozmiar);
    WypiszTablice(tablica,rozmiar);

    int liczba = liczWiekszeOdZera(tablica, rozmiar);
    cout<<liczba;

    return 0;
}

void WypiszTablice(float *t, int r) {
    for(int i = 0; i<r; i++) {
        cout<<*(t + i)<<"\t\t";
    }
    cout<<endl;

    for(int i = 0; i<r; i++) {
        cout<<(t + i)<<"\t";
    }
    cout<<endl;
}

float PomnozWszystko(float *t, int r) { // jak przekazujemy przez wskaznik zmienna lub tablice do funkcji to mamy tak jakby caly czas do niej dostep i mozeny ja modyfikowac
    float wynik = 1;
    for(int i = 0; i<r; i++) {
        wynik *= *(t+i);
    }
    return wynik;
}

void ZmienKolejnosc(float *t, int r) {
    cout<<endl;
    float rev[r] = {0};
    for(int i = 0; i < r; i++) {
        rev[r-i] = *(t+i);
    }
    for(int i = 0; i < r; i++) {
        cout<<rev[i];
    }
}

void WprowadzWartosciTablicy(float *t, int r) {
    cout<<"Wprowadz wartosci tablicy: "<<endl;
    for(int i = 0; i<r; i++) {
        cout<<"T["<<i<<"]=";
        cin>>*(t+i);
    }
};


int liczWiekszeOdZera(float *t, int r) {
    int ilosc = 0;
    for(int  i = 0; i<r; i++) {
        if((*(t+i)) > 0) {
            ilosc++;
        }
   }
   return ilosc;
}

