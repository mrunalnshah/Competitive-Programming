/*
  Problem Number : 0027
  Problem Title  : Remove Elements
  Link :
    https://leetcode.com/problems/remove-element/description/

  Method : Using the nums vector and removing elements(val) from it. {no new
  vector created}

  Author : Mrunal Nirajkumar Shah
  Date   : 2nd of August, 2024
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void removeElementFromVector(vector<int>& nums, int index) {
    for (int i = index; i < nums.size() - 1; i++) {
      nums[i] = nums[i + 1];
    }
    nums.pop_back();
  }
  int removeElement(vector<int>& nums, int val) {
    if (nums.empty()) {
      return 0;
    }

    int i = 0;
    while (i < nums.size()) {
      if (nums[i] == val) {
        removeElementFromVector(nums, i);
      } else {
        i++;
      }
    }
    return nums.size();
  }
};

int main() {
  Solution mySolution;
  vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  int val = 2;

  // vector<int> nums = {3, 2, 2, 3};
  // int val = 3;

  cout << mySolution.removeElement(nums, val) << endl;

  return 0;
}