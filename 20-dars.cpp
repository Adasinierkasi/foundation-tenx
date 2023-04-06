#include <iostream>

using namespace std;

int linearSearch (int arr[], int arrLength, int item) {
  for(int i = 0; i < arrLength; i++){
    if(arr[i] == item){
      return i;
    }
  }
  return -1;
}

int binarySearch (int arr[], int arrLength, int item) {
  int low = 0;
  int high = arrLength - 1;
  
  while(low <= high){
    int middle = (low + high) / 2;
    if(arr[middle] == item){
      return middle;
    }

    if(arr[middle] < item){
      low = middle + 1;
    }else{
      high = middle - 1;
    }
  }

  return -1;
}


int main () {
  int example[] = { 1, 2,7,10,55,80};
  int item = 1;

  // cout << linearSearch(example,6,item);
  cout << binarySearch(example,6,item);
  return 0;
}