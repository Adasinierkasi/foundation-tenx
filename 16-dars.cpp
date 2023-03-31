#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    srand(time(NULL));
    string str = "Assalomalaykum";
    string res = "";
    int i = 0;
    int strLength = str.length();
    while(strLength){
      int idx = rand() % strLength;
      char n = str[idx];

      res += n;
      str.replace(idx,1,"");
      strLength = str.length();
    }
        
    cout << res;
    return 0;
}