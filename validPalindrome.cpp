#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string getRawString(string str, int length){
  string rawString = "";

  for(int i=0; i<length; i++){
    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z' )){
      rawString.push_back(tolower(str[i]));
    }
  }
  return rawString;
}

bool validPalindrome(string str){
  int length = str.length();

  string rawString = getRawString(str, length);

  int i=0, j=rawString.length() - 1;

  while(i < j){
    if(tolower(rawString[i]) != tolower(rawString[j])){
      return false;
    }
    else{
      i++;
      j--;
    }
  }
  return true;
}

int main() {
  string str = "A man, a plan, a canal: Panama";

  cout << validPalindrome(str);
  return 0;
}
