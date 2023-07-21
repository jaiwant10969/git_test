#include <cstring>
#include <iostream>
#include <stack>

void reverse(char string[], int length) {
    std::stack<char> S;
    for(int i=0; i<length; i++){
        S.push(string[i]);
    }

    for(int i=0;i<length;i++){
        string[i] = S.top();
        S.pop();
    }
}

int main() {
  char String[100];
  std::cout << "Enter the string: ";
  std::cin >> String;
  reverse(String, strlen(String));
  std::cout << String;

  return 0;
}