#include <iostream>
#include <ctype.h>

using namespace std;

// void foo (int a) {
//   cout << a << endl;
//   if(a != 0){
//     foo(a - 1);
//   }
  
// }

//  1,2,3,5,8,13


// int factorial (int n) {
//   if(n == 1){
//     return 1;
//   }
//   return factorial(n - 1) * n;
// }


int fibonacci (int n){
  // if(i >= n - 1){
  //   return b;
  // }
  if(n == 2){
    return n - 1;
  }else if(n == 1){
    return n;
  }
  else if(n == 0){
    return 0;
  }
  // int v = b;
  // b = a + b;
  // a = v;
  // return fibonacci(n - 1) + fibonacci(n - 2);

  return fibonacci(n - 1) + fibonacci(n - 2);
}





int main()
{   

    // Without recursive function 

    // int n = 11,a = 0,b = 1,c;
    // for(int i = 2; i <= n;i++){
    //   c = b;
    //   b = a + b;
    //   a = c;
    // }
    cout << fibonacci(11) << endl;
    return 0;
}