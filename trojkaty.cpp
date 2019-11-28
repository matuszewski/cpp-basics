#include <iostream>

using namespace std;

int main() {
    int h = 7;

    for(int i = 0; i<h; i++) {      //trojkat prostokatny   //7
        for(int j = 0; j<=i; j++) {                         //0, 1, ... 6 7
            cout<<"X ";
        }
        cout<<endl;
    }

    cout<< endl;

    for(int i = h; i>0; i--) {      //trojkat prostokatny odwrocony
        for(int j = 0; j<i; j++) {
            cout<<"X ";
        }
        cout<<endl;
    }


    return 0;
}
