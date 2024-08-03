/*
  Problem Number : 1470
  Problem Title  : Shuffle the Array
  Link :
    https://leetcode.com/problems/shuffle-the-array/description/

  Method : using the nums vector, i inserted and erased the elements.

  Author : Mrunal Nirajkumar Shah
  Date   : 3rd of August, 2024
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> shuffle(vector<int>& nums, int n) {
    int i = 0;
    int j = n;
    int k = 1;

    while (j < nums.size()) {
      nums.insert(nums.begin() + k, nums[j]);
      k = k + 2;
      nums.erase(nums.begin() + j + 1);
      j++;
    }

    return nums;
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