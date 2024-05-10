/*
    Author : Mrunal Nirajkumar Shah
    Date   : 10th of May,2024

    LeetCode : https://leetcode.com/problems/baseball-game/
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  int calPoints(vector<string>& operations) {
    int* ops = new int[operations.size()];
    int top = -1;

    int num1, num2;

    for (int i = 0; i < operations.size(); i++) {
      if (operations[i] == "+") {
        num1 = ops[top];
        num2 = ops[top - 1];
        top++;
        ops[top] = num1 + num2;
      } else if (operations[i] == "D") {
        num1 = ops[top];
        top++;
        ops[top] = num1 * 2;
      } else if (operations[i] == "C") {
        top--;
      } else {
        top++;
        ops[top] = stoi(operations[i]);
      }
    }

    int sum = 0;
    for (int i = 0; i <= top; i++) {
      sum = sum + ops[i];
    }
    return sum;
  }
};

int main() {
  Solution temp;
  vector<string> operations = {"5", "2", "C", "D", "+"};

  cout << temp.calPoints(operations) << endl;
  return 0;
}