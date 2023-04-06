#include <iostream>

using namespace std;

int main () {
  int n,correctAnswerCount;
  cout << "Nechta so'z kiritasiz: "; cin >> n;

  string questions[n][2];

  for(int i = 0; i < n; i++){
    cout << "Inglizchasini kiriting: "; cin >> questions[i][0];
    cout << "O'zbekchasini kiriting: "; cin >> questions[i][1];
  }
  
  for(int i = 0; i < n; i++){
    string currentAnswer;
    if(i % 2 == 0){
      cout << questions[i][0] << " ning tarjimasini: "; cin >> currentAnswer;
      if(currentAnswer == questions[i][1]){
        correctAnswerCount++;
      }
    }else{
      cout << questions[i][1] << " ning tarjimasini: "; cin >> currentAnswer;
      if(currentAnswer == questions[i][0]){
        correctAnswerCount++;
      }
    }
    

    
  }

  cout << correctAnswerCount << " ta savolga to'g'ri javob berdingiz";
  return 0;
}