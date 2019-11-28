#include <iostream>

using namespace std;

float *tworzTablice(int rozmiar);
float *tablicaDodatnich(float *t, int rozmiar);
int main() {

   /* int rozmiar = 6;
    float * tablica = tworzTablice(rozmiar);

    for(int i = 0; i<rozmiar; i++) {    // wpisanie do tablicy wartosci
        cin>>tablica[i];
    }

    for(int i = 0; i<rozmiar; i++) {    // wypisanie tablicy
        cout<<tablica[i]<<", ";
    }


    delete [] tablica;
    cout<<endl<<tablica[0];
*/
    int rozmiar = 10;
    float tablica[10] = {4,2,3,-1,6,-2,-3,-6,-1,0}; //4+, 0, 5-

    float * tab = tablicaDodatnich(tablica, rozmiar);

        for(int i = 0; i<4; i++) {    // wypisanie tablicy
        cout<<tab[i]<<", ";
    }

    return 0;
}

float *tworzTablice(int rozmiar) {
    float *wynik = new float [rozmiar];
    return wynik;
}





float * tablicaDodatnich(float *t, int rozmiar) {

    int dod = 0;
    int n = 0;
    for(int i = 0; i<rozmiar;i++) {     // zlicz dodatnie liczby
        if(*(t+i) > 0 ) {
            dod++;
        }
    }
    cout<<"dodatnich liczb:"<<dod<<endl;

    float * td = new float[dod];    //tworz nowa tablice (elementow dodatnich) o rozmiarze dod

    for(int j = 0; j<rozmiar;j++) {     // zlicz dodatnie liczby
        if(*(t+j) > 0 ) {

            td[n] = *(t+j);
            n++;
        }
    }
    return td;
}




    //typ *ptr = new typ
    //delete ptr // bez gwiazdki
    //typ *ptrtab = new typ [rozmiar];      //tworzenie tablicy dynamicznej - o dowolnym rozmiarze
    //delete[] ptrtab //bez gwiazdki
    // typ **tablica_dwuwymiarowa
