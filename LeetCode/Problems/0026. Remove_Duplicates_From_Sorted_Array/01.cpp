/*
  Problem Number : 0026
  Problem Title  : Remove Duplicates from Sorted Array
  Link :
  https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

  Method : Created a temp vector and added the unique elements in it.

  Author : Mrunal Nirajkumar Shah
  Date   : 1st of August, 2024
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    vector<int> temp;

    int key = nums[0];
    temp.push_back(key);
    for (int i = 1; i < nums.size(); i++) {
      if (key == nums[i]) {
        continue;
      } else {
        key = nums[i];
        temp.push_back(key);
      }
    }
    nums = temp;
    return nums.size();
  }
};

int main() {
  Solution mySolution;
  // vector nums = {1, 1, 2, 2, 3};
  vector nums = {1, 1, 1, 1, 2, 3, 4, 4, 4, 5, 8, 9, 33, 33, 33, 55};

  cout << mySolution.removeDuplicates(nums) << endl;
}