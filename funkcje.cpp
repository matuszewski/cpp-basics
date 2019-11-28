#include <iostream>

using namespace std;

/* deklaracja funkcji */
void NapiszHello();
void WypiszHelloWielokrotnie(int);

int main() {
    /* wywolanie funkcji */
    //NapiszHello();
    WypiszHelloWielokrotnie(5);
    return 0;
}

/* definicja funkcji  */
void NapiszHello() {
    cout << "Hello world!" << endl;
}

void WypiszHelloWielokrotnie(int ile) {
    for(int i = 1; i<= ile; i++) {
        NapiszHello();      //funkcja wywo³ana w funkcji
    }
}
