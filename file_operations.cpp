

#include <iostream>
#include <fstream>  //biblioteka umozliwiajaca operacje na plikach

    //tryb do zapisu

    //tryb do odczytu
    //wskaznik jest na poczatku pliku

    //tryb do nadpisywania
    //wskaznik jest na koncu pliku
    //plik nie jest czysczony



    //formatowanie
    //ilu znakow chcemy uzyc na zqapisanie zmiennej
    //  cin.width(liczba znakow)

    //operacje we/wy sa najwolnieszymi operacjami
using namespace std;

int main() {
    // ZAPIS DO PLKU Z DOPISYWANIEM
    ofstream ofs;   //tworzymy obiekt
    ofs.open("data.txt", ofstream::out | ofstream::app);    //flagi

    float tablica[5] = {2,5,34.232333,1,6};

    for(int i=0; i<5; i++) {
        ofs.width(10);
        ofs<<"1: "<<tablica[i];
        ofs.width(10);
        ofs<<tablica[i]+1<<endl;
    }
    ofs.close();



    // ODCZYT Z PLIKU (5 LINIJEK)
    ifstream odczyt;
    odczyt.open("date.txt");

    int zmienna = 0, zmienna2 = 0;

    if(odczyt.is_open()) {
        for(int i =0; i<5; i++) {
            odczyt>>zmienna;
            cout<<zmienna<<" ";
            
            odczyt>>zmienna2;
            cout<<zmienna2<<" ";
        }
        cout<<endl;
    } else {
        cout<<"plik nie istnieje / blad otwierania pliku"<<endl;
    }
    
    // ODCZYT Z PLIKU (GDY NIE WIEMY ILE LINIJEK)
    ifstream odczyt;
    odczyt.open("data.txt");
    
    if(odczyt.is_open()) {
        while(!odczyt.eof()) {  // dopoki nie ma konca pliku (end of file)
            
        }
        odczyt.close();
    } else {
        cout<<"Nie udalo sie otworzyc pliku"<<endl;
    }
    
    
    
    int rozmiar = 0;
    cout<<"Podaj rozmiar tablicy"<<endl;
    
    float *tab1 = new float[rozmiar];   //tworzenie tablic dynamicznych
    int *tab2 = new int[rozmiar];
    
    for (int i = 0; i<5; i++) {
        cout<<"Podaj liczbe rzeczywista: ";
        cin>>tab1[i];
        
        cout<<endl<<"Podaj liczbe calkowita: ";
        cin>>tab2[i];
    }
    
    delete[] tab1;
    delete[] tab2;
    
    
    
    return 0;
}
