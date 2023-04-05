#include <iostream>

using namespace std;

void bubbleSort(int arr[], int arrSize) {
  for (int i = 0; i < arrSize-1; i++){
    for (int j = 0; j < arrSize - 1; j++)
    if(arr[j + 1] < arr[j]){
      swap(arr[j], arr[j + 1]);
    }
  }

  for(int i = 0; i < arrSize; i++){
    cout << arr[i] << " ";
  }
}


int main ()  {
  int arr[] = { 12, 321, 14, 54};
  bubbleSort(arr,4);
  return 0;
}