#include <iostream>

using namespace std;

// void a(){
//   cout << "a ishladi";
//   b();
// }

// void b (){
//   cout << "b ishladi";
//   a();
// }

void foo(int a){
  if(a == 0){
    return;
  }
  cout << a << endl;
  foo (a - 1);
}

int main () {
  foo(10);
  return 0;
}