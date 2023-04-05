#include <iostream>

using namespace std;


int main ()  {
  // double onaTili[] =  {1,2,3,4};
  // double matem[] =  {1,2,3,4};
  // double tarix[] =  {1,2,3,4};
  // double fizika[] =  {1,2,3,4};

  double baholar[3][5] = {
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4}
  };

  for(int i = 0;i < 3; i++ ){
    for(int j = 0; j < 5; j++){
       cout << baholar[i][j] << " ";
    }
    cout << endl;
  }



  return 0;
}