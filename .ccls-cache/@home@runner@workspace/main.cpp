#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){

  srand(time(0));
  const int SIZE = 100000;
  
  int arr [SIZE];
  int co = 0;
  for(int i = 0; i < SIZE; i++){
    arr[i] = rand() % 10000 + 1;
  }

  for(int i = 0; i < SIZE; i++){
    if(arr[i] >= 50 && arr[i] <= 100){
      co++; 
      cout << arr[i] << endl;
    }
  }  
  cout << "total: " << co <<endl;
  return 0;
}