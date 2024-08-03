/*
  Problem Number : 0027
  Problem Title  : Remove Elements
  Link :
    https://leetcode.com/problems/remove-element/description/

  Method : Creating a new Vector and storing the values which are not the key.

  Author : Mrunal Nirajkumar Shah
  Date   : 2nd of August, 2024
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == val) {
        continue;
      } else {
        temp.push_back(nums[i]);
      }
    }
    nums = temp;
    return nums.size();
  }
};

int main() {
  Solution mySolution;
  //  vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  //  int val = 2;

  vector<int> nums = {3, 2, 2, 3};
  int val = 3;

  cout << mySolution.removeElement(nums, val) << endl;

  return 0;
}