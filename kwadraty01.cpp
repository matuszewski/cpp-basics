#include <iostream>

using namespace std;

int main() {
    /*


    for(int i = 0; i < 10; i++) {       // z uzyciem petli for od 0
        for(int j = 0; j<10; j++) {
            cout<<(i+1)*(j+1)<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n";

    for(int i = 1; i <= 10; i++) {      // z uzyciem petli for od 1
        for(int j = 1; j <=10; j++) {
            cout<<i*j<<"\t";
        }
        cout<<"\n";
    }


    */

    int x = 5;
    int y = 6;

    cout<<"\n x = "<<x<<"\n"<<" y = "<<y<<"\n\n";

    for(int i = 0; i <= y; i++) {                   //kwadrat pe³ny
        for(int j = 0; j<= x; j++) {
            cout<<"X ";
        }
        cout<<"\n";
    }

    cout<<"\n x = "<<x<<"\n"<<" y = "<<y<<"\n\n";

    for(int i = 0; i <= y; i++) {                   //tylko wierzcholki
        if(i == 0 || i == y) {

            for(int j = 0; j<= x; j++) {
                if(j == 0 || j == x) {

                    cout<<"X ";
                } else {
                    cout<<"  ";
                }
            }
        }
        cout<<"\n";
    }

    cout<<"\n x = "<<x<<"\n"<<" y = "<<y<<"\n\n";


    for(int i = 0; i <= y; i++) {                   //tylko wierzcholki
        for(int j = 0; j<= x; j++) {


            if(i==0 || i == y) {
                cout<<"X ";
            } else  if(j == 0 || j == x) {
                cout<<"X ";
            } else {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

    return 0;
}
