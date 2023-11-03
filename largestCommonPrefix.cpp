#include <iostream>
#include<string>
using namespace std;

string longestCommonPrefix(string arr[], int size){
  string prefix = arr[0];

  for(int i=1; i<size; i++){
    int j = 0;

    while(prefix[j] == arr[i][j] && j < prefix.length() && j < arr[i].length()){
      j++;
    }
    prefix = prefix.substr(0,j);
    if(prefix.empty()){
      break;
    }
  }

  return prefix;
}

int main() {
  string arr[] = {"flower", "flight", "flow"};

  string result = longestCommonPrefix(arr, 3);

  cout << result;
  return 0;
}