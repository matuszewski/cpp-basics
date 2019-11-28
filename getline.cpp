#include <iostream>

using namespace std;

int main() {
  char * napis = new char[128];
  
  cout<<"Napiz cos: ";
  cin.getline(napis, 128);  //zmienna i dlugosc przchwytywanych danych
  cout<< napis<<endl;
  
  ofstream zapis;
  zapis.open("plik.txt", ofstream::app);  //append czyli dopisywnaie nie nadpisywanie
  zapis<<napis<<endl;
  
  zapis.close();
  delete [] napis;
  
  return 0;
}
