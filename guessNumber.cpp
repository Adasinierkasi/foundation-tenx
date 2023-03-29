#include <iostream>
#include <time.h>

using namespace std;


int main(){
  srand(time(NULL));
  int num = rand();
  int guessNum;
  do {
    cout << "Enter number: "; cin >> guessNum;
  }while(num != guessNum)
  return 0;
}