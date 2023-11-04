#include <iostream>
#include<string>
#include<stack>
using namespace std;

bool validParentheses(string str){
  stack<char> parenthesesStack;

  for(char bracket: str){
    if((bracket == '(') || (bracket == '[') || (bracket == '{')){
      parenthesesStack.push(bracket);
    }
    else{
      if(parenthesesStack.empty()){
        return false;
      }
      char top = parenthesesStack.top();
      parenthesesStack.pop();
      if((bracket == ')' && top != '(' ) || (bracket == '}' && top != '{' ) || (bracket == ']' && top != '[' )){
        return false;
      }
    }
  }

  return parenthesesStack.empty();
}

int main() {
  string input = "()[]{}";

  cout << validParentheses(input);
  return 0;
}