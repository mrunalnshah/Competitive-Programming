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
    if(n == 0 || n == 1){
      return 1;
    }
    return climbStairs(n-1) + climbStairs(n-2);
  }
};

int main() {
  Solution temp;
  cout << temp.climbStairs(45) << endl;
  return 0;
}