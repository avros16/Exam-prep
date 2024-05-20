#include <iostream>
using namespace std;


// 1. Write a program that calculate the sum of all elements in an integer array

int main() {
int sum {0};

  
  int arr[5] = {1,2,3,4,5};

  
  for (int i = 0; i<5; i++){
    sum += arr[i];
  }
  cout << "This is the sum: " << sum;
}