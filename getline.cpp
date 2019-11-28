#include <iostream>

using namespace std;

int main() {
  char * napis = new char[128];
  
  cout<<"Napiz cos: ";
  cin.getline(napis, 128);
  cout<< napis<<endl;
  
  return 0;
}
