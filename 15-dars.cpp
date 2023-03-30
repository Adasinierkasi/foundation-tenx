#include <iostream>
#include <string.h>
using namespace std;

// Berilgan matnda berilgan so'z necha marta ishtirok etganini topish

// 
// a = "Assalom alaykum Assalom"
// b = "Assalom"

// 2

// int findWord (string text, string word) {
//   int count = 0, textLength = text.length(), wordLength = word.length(),idx;
//   for(int i = 0; i < textLength; i++){
//     idx = text.find(word);
//     if(idx >= 0){
//       count++;
//       text.assign(idx, wordLength, " ");
//     }
//   }
//   return count;
// }


string mixStrings(string a,string b) {
  // string newStr = "";
  // int m = max(a.length(),b.length());
  // for(int i = 0; i < m; i++){
  //   if(i < a.length()) newStr += a[i];
  //   if(i < b.length()) newStr += b[i];
  // }
  // return newStr;
}

int main () {
  cout << mixStrings("abc", "xyz");
  return 0;
}


// https://medium.com/codex/hello-world-in-15-different-programming-languages-172aad2573f8