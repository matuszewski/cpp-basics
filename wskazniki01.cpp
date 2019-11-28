#include <iostream>

using namespace std;

int main() {
    int zmienna = 16;
    int *wskaznik = &zmienna;

    cout<<"Wypisuje wskaznik czyli zawartosc wskaznikia - adres zmiennej: \t\t"<<wskaznik<<endl;
    cout<<"Wypisuje *wskaznik czyli wartosc zmiennej na ktora wskazuje wskaznik:\t "<<*wskaznik<<endl;



    int tablica[5] = {6,12,24,32,48};

    cout<<tablica<<endl;
    cout<<tablica + 3<<endl;
    cout<<*(tablica + 3)<<endl; //klasyczny sposob takie old school programmin'



    int liczba = 1;
    int *ptr_liczba = &liczba;

    cout<<liczba<<" "<<&liczba<<endl;
    cout<<*ptr_liczba<<" "<<ptr_liczba<<endl;



    int liczba2 = 2;
    ptr_liczba = &liczba2;

    cout<<liczba2<<" "<<&liczba2<<endl;
    cout<<*ptr_liczba<<" "<<ptr_liczba<<endl;



    for(int i = 0; i<5; i++) {
        cout<<*(tablica + i)<<"\t\t ";
    }
    cout<<endl;
    for(int i = 0; i<5; i++) {
        cout<<(tablica + i)<<"\t ";
    }
    return 0;
}
