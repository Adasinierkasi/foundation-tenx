#include <iostream>

using namespace std;

void insertionSort (int arr[], int arraySize) {
  int minIdx;
  for(int i = 0; i < arraySize - 1; i++){
    minIdx = i;
    for(int j = i + 1; j < arraySize;j++){
      if(arr[j] < arr[minIdx]){
        minIdx = j;
      }
    }
     swap(arr[minIdx], arr[i]);
  }

  for(int i = 0;i < arraySize;i++){
    cout << arr[i] << " ";
  }
}

int main () {
  int n[] = {8,2,12,4,5};
  selectionSort(n,5);
  return 0;
}