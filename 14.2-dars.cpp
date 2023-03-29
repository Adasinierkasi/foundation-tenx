#include <iostream>
#include <string.h>

using namespace std;

// string func (string text,int start, int end = 0) {
//   string newStr;
//   int length = ((end) ? start + end : text.length());
//   for(int i = start -1; i < length; i++ ){
//     newStr += text[i];
//   }
//   return newStr;
// }


// bool isEmpty (string str) {
//   return (str.length() != 0);
// }

// string add (string str1,string str2) {
//   return (str1 +  ' ' + str2);
// }



int main () {


  // cout << func("Salom dunyo", 7, 2);
  // dunyo
  
  // cout << boolalpha << isEmpty("hhhh");
  string text = "helloel ";
  string text2 = "world";
  // cout << "Matn uzunligini qaytaradi " << text.size() << endl;

  // cout << "Matn uzunligini qaytaradi " << text.length() << endl;

  // cout <<  "Xotiradan olgan joy qiymatini qaytaradi " << text2.capacity() << endl;

  //  cout <<  "Max qiymatini qaytaradi " << text2.max_size();

  // cout << text.length() << endl;
  // text.clear();
  // cout << text.empty() << endl;
  // cout << text.append(text2, 1, 2);

  // text.assign(text2, 2,4); text = text1
  // text.assign(text2, 2,4);

  // text.append(text2, 2,4); // text += text1
  // text.append(text2, 2,4);
  // cout << text; // text = text2
  // text.erase(0,3);
  // text.replace(0,3, "*****");
  cout << boolalpha << text.find("lo");
  cout << text;

  return 0;
}