#include <iostream>

using namespace std;
void b();

void a(){
  cout << "a ishladi";
  b();
}

void b (){
  cout << "b ishladi";
  a();
}



int main () {
  b();
  return 0;
}