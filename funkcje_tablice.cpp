#include <iostream>

using namespace std;

void wypiszTablice(int [], int );
int sumujTablice(int [], int );
int elementNajmniejszyTablicy(int [], int);
int iloscElementowUjemnych( int [], int);

int main() {
    int tab[5] = {5,-8,2,-4,-3};
    wypiszTablice(tab, 5);

    cout << "\n" << sumujTablice(tab, 5) <<endl;

    cout << elementNajmniejszyTablicy(tab, 5) << endl;

    cout << iloscElementowUjemnych(tab, 5) << endl;

    return 0;
}

void wypiszTablice(int t[], int r) {
    for(int i = 0; i <r; i++) {
        cout<<t[i]<<" ";
    }
}

int sumujTablice(int t[], int r) {
    int suma = 0;
       for(int i = 0; i <r; i++) {
        suma += t[i];
    }
    return suma;
}

int elementNajmniejszyTablicy(int tab[], int r) {
    int n = tab[0];
    for(int i = 0; i<r; i++) {
        if (tab[i] <= n) n = tab[i];
    }
    return n;
}

int iloscElementowUjemnych( int tab[], int r) {
    int ilosc = 0;
    for(int i = 0; i<r; i++) {
        if (tab[i] < 0) ilosc++;
    }
    return ilosc;
}

