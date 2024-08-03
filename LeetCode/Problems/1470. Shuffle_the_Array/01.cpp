/*
  Problem Number : 1470
  Problem Title  : Shuffle the Array
  Link :
    https://leetcode.com/problems/shuffle-the-array/description/

  Method : created a new vector and store x1 then xn+1, x2 then xn+2 ....

  Author : Mrunal Nirajkumar Shah
  Date   : 3rd of August, 2024
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> newNums;

    int i = 0;
    int j = n;

    while (i < n && j < nums.size()) {
      newNums.push_back(nums[i]);
      newNums.push_back(nums[j]);
      i++;
      j++;
    }
    while (i < n) {
      newNums.push_back(nums[i]);
      i++;
    }
    while (j < nums.size()) {
      newNums.push_back(nums[j]);
      j++;
    }

    return newNums;
  }
};

int main() {
  Solution mySolution;

  vector<int> temp = {2, 5, 1, 3, 4, 7};
  int n = 3;

  vector<int> result = mySolution.shuffle(temp, n);

  for (int i = 0; i < result.size(); i++) {
    cout << i << " : " << result[i] << endl;
  }

  return 0;
}