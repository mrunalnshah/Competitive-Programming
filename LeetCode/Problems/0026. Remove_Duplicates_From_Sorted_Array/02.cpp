/*
  Problem Number : 0026
  Problem Title  : Remove Duplicates from Sorted Array
  Link :
  https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

  Method : Removing the elements from same Vector and returing the value.

  Author : Mrunal Nirajkumar Shah
  Date   : 1st of August, 2024
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
  int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
      return 0;
    }

    int key = nums[0];
    int i = 1;
    while (i < nums.size()) {
      if (key == nums[i]) {
        removeElementFromVector(nums, i);
      } else {
        key = nums[i];
        i++;
      }
    }
    return nums.size();
  }
};

int main() {
  Solution mySolution;
  vector nums = {1, 1};
  // vector nums = {1, 1, 1, 1, 2, 3, 4, 4, 4, 5, 8, 9, 33, 33, 33, 55};

  cout << mySolution.removeDuplicates(nums) << endl;
  
  return 0;
}