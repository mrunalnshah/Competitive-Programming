/*
    Author : Mrunal Nirajkumar Shah
    Date   : 19th of May,2024

    LeetCode : https://leetcode.com/problems/fibonacci-number/
*/

#include <iostream>

using namespace std;

class Solution {
 public:
  int fib(int n) {
    int sum = 0;
    int first = 0;
    int second = 1;

    for (int i = 0; i < n; i++) {
      sum = first + second;
      first = second;
      second = sum;
    }
    return first;
  }
};

int main() {
  Solution myFib;
  cout << myFib.fib(5) << endl;
  return 0;
}