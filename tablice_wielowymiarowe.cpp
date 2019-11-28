#include <iostream>

using namespace std;

int main() {
    //tablice wielowymiarowe  w c++ nie ma takich tablic, sa tablice tablic itd // w sumie wiecej niz 2 wymiary nie beda na studiach potrzebne
                    // x, y      y y y   y y y
    int wielowymiarowa[2][3] = {{5,8,7},{4,3,1}};   // pierwszy parametr = ile tablic; drugi parametr = ile elementow w tablicy
                    //           wiersz, wiersz
    //wypisywanie tablicyw wielowymiarowej
    for(int i = 0; i<2; i++) {
        for(int j = 0; j<3; j++) {
            cout<<wielowymiarowa[i][j] <<" | ";
        }
        cout<<endl;
    }

    for(int i = 0; i<2; i++) {
        for(int j = 0; j<3; j++) {
            if(i == 0) {
                cout<<"wpisz wartosc pierwszej tablicy: ";
            } else if(i == 1) {
                cout<<"wpisz wartosc drugiegj tablicy: ";
            }
            cin>>wielowymiarowa[i][j];
            cout<<endl;
        }
    }

     for(int i = 0; i<2; i++) {
        for(int j = 0; j<3; j++) {
            cout<<wielowymiarowa[i][j] <<" | ";
        }
        cout<<endl;
    }

    return 0;
}
