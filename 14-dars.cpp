

// ****** 1

// #include <iostream>
// #include <cstring>
// #include <ctype.h>
// #include <cmath>
// #include <string>

// using namespace std;

// int Raqam(int n){
//     int manfiy=1, sum=0, i=0;
//     while(n){
//         sum += n % 10 * manfiy;
//         manfiy *= (-1);
//         n /= 10;
//         i++;
//     }
//     return sum *((i%2==0)?(-1):(1));
// }

// int main() {
//    int son = 111;
//   //  cout << " sonni kiriting: ";
//   //  cin >> son;
//    cout << " natija: "<<Raqam(son);

//   return 0;
// }
// Sizga musbat butun son berilgan. n ning har bir raqami quyidagi qoidalarga muvofiq belgiga ega:

// Har bir raqam qo'shni raqamlarga qarama-qarshi belgiga ega.
// Barcha raqamlarning yig'indisini tegishli belgisi bilan qaytaring.

// Input: n = 521
// Output: 4
// Explanation: (+5) + (-2) + (+1) = 4.

// Input: n = 111
// Output: 1
// Explanation: (+1) + (-1) + (+1) = 1.


// Input: n = 886996
// Output: 0
// Explanation: (+8) + (-8) + (+6) + (-9) + (+9) + (-6) = 0.



// ================




// ============ 2

// #include <iostream>
// #include <cstring>
// #include <ctype.h>
// #include <cmath>
// #include <string>

// using namespace std;

// int Raqam(int n,int xona){
//     if(n/10==0){
//         return n;
//     }
//     return (n % 10) * ((xona%2==0) ? (-1) :(1)) + Raqam(n/10, xona-1);
// }

// int main() {
//    int son = 1114;
//   //  cout << " sonni kiriting: ";
//   //  cin >> son;
//    int non=son, i=0;
//    while(non){
//      i++;
//      non/=10;
//    }
//    cout << " natija: "<<Raqam(son,i);
//   return 0;
// }
// Sizga musbat butun son berilgan. n ning har bir raqami quyidagi qoidalarga muvofiq belgiga ega:

// Har bir raqam qo'shni raqamlarga qarama-qarshi belgiga ega.
// Barcha raqamlarning yig'indisini tegishli belgisi bilan qaytaring.

// Input: n = 521
// Output: 4
// Explanation: (+5) + (-2) + (+1) = 4.

// Input: n = 111
// Output: 1
// Explanation: (+1) + (-1) + (+1) = 1.


// Input: n = 886996
// Output: 0
// Explanation: (+8) + (-8) + (+6) + (-9) + (+9) + (-6) = 0.


//  =============== 




//  =============== 3

// #include <iostream>
// #include <cstring>
// #include <ctype.h>
// #include <cmath>
// #include <string>

// using namespace std;

// int Raqam(int n){
//     if(n/10==0){
//         return n;
//     }
//     return (n % 10) + Raqam(n / 10);
// }

// int main() {
//    int n = 999999999, natija;
//   //  cout << " sonni kiriting ";
//   //  cin>>n;
//    natija=n;
//    while(natija / 10 != 0){
//      cout << "natija: "<<Raqam(natija) <<endl;
//      natija = Raqam(natija);
//    }
//   return 0;
// }
// Butun son berilgan bo'lsa, natijada faqat bitta raqam bo'lguncha uning barcha raqamlarini qayta-qayta qo'shing va uni qaytaring.

// Kirish: son = 38
// Chiqish: 2
// Izoh:
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2
// 2 faqat raqamga ega bo'lgani uchun uni qaytarildi.

// Input: num = 0
// Output: 0



// ============



// ============== 4


// #include <iostream>
// #include <cstring>
// #include <ctype.h>
// #include <cmath>
// #include <string>

// using namespace std;

// int Raqam(int n){
//     int sum=0;
//     while(n){
//         sum+=n%10;
//         n/=10;
//     }
//     return sum;
// }

// int main() {
//    int n, natija;
//    cout << " sonni kiriting ";
//    cin>>n;
//    natija=n;
//    while(natija/10!=0){
//      cout << "natija: "<<Raqam(natija) <<endl;
//      natija=Raqam(natija);
//    }
//   return 0;
// }
// Butun son berilgan bo'lsa, natijada faqat bitta raqam bo'lguncha uning barcha raqamlarini qayta-qayta qo'shing va uni qaytaring.

// Kirish: son = 38
// Chiqish: 2
// Izoh:
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2
// 2 faqat raqamga ega bo'lgani uchun uni qaytarildi.

// Input: num = 0
// Output: 0




#include <iostream>

using namespace std;


int main (){
  int n = 38;
  cout << ((n % 9 == 0) ? 9 : (n % 9));
  return 0;
}