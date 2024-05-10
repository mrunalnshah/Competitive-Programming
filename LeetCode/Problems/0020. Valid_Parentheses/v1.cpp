/*
    Author : Mrunal Nirajkumar Shah
    Date   : 10th of May,2024

    LeetCode : https://leetcode.com/problems/valid-parentheses/
	
	Accepted at 2nd Try.
*/


#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    char *arr = new char[s.size()];
    int top = -1;

    if (s.size() % 2 == 0) {
      for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
          top++;
          arr[top] = s[i];
        } else {
          if (top == -1) {
            return false;
          } else {
            if (s[i] == ')') {
              if (arr[top] == '(') {
                top--;
              } else {
                return false;
              }
            } else if (s[i] == '}') {
              if (arr[top] == '{') {
                top--;
              } else {
                return false;
              }
            } else {
              if (arr[top] == '[') {
                top--;
              } else {
                return false;
              }
            }
          }
        }
      }
    } else {
      return false;
    }
    if (top == -1) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  Solution temp;

  bool istrue = temp.isValid("}[");

  if (istrue == true) {
    cout << "TRUE" << endl;
  } else {
    cout << "FALSE" << endl;
  }
  return 0;
}