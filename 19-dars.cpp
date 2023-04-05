#include <iostream>

using namespace std;

// Insertion sort
void sort(int arr[], int arrLength) {

  for(int i = 0; i < arrLength;i++){

    for(int j = i + 1; j < arrLength; j++){

      if(arr[j] < arr[i]){

        swap(arr[i],arr[j]);

      }

    }
    
  }

  for(int i = 0; i < arrLength; i++){
    cout << arr[i] << " ";
  }

}

int main ()  {
  int arr[] = {45,3,2,1,435454};
  sort(arr,5);
  return 0;
}