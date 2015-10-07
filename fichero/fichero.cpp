#include <iostream>
#include <fstream>
using namespace std;

int main() {
   char c[128];
   ifstream fe("hola.txt");

   while(!fe.eof()) {
      fe >> c;
      cout<<c<<" ";
   }
   fe.close();

   return 0;
}
