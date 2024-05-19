/*
    Author : Mrunal Nirajkumar Shah
    Date   : 19th of May,2024

    Correct Solution but Time Limit Exceeded.
    LeetCode : https://leetcode.com/problems/climbing-stairs/
*/

#include <iostream>

using namespace std;

class Solution {
 public:
  int climbStairs(int n) {
    int first = 0;
    int second = 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum = first + second;
      first = second;
      second = sum;
    }
    return second;
  }
};

int main() {
  Solution temp;
  cout << temp.climbStairs(45) << endl;
  return 0;
}