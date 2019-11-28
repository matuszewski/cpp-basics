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
  
  
  char * wczytane = new char[128];
  ifstream odczyt;
  odczyt.open("plik.txt");
  
  if(odczyt.is_open()) {
    while(!odczyt.getline(wczytane, 128)) {
      cout<<odczyt;
    }
    odczyt.close();
    cout<<"Zakonczono czytanie pliku"<<endl;
    
  } else {
    cout<<"Nie udalo sie otworzyc pliku / plik nie istnieje"<<endl;
  }
  delete[] wczytane;
  
  // ^^ to wszystko mozna zrobic poprzez while(!odczyt.eof())
  
  return 0;
}
