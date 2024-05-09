/*
    Author : Mrunal Nirajkumar Shah
    Date   : 9th of May,2024

    LeetCode : https://leetcode.com/problems/concatenation-of-array/
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans(nums.size() * 2);
    for (int i = 0; i < nums.size(); i++) {
      ans[i] = nums[i];
      ans[nums.size() + i] = nums[i];
    }

    return ans;
  }
};

int main() {
  Solution temp;

  vector<int> nums = {1, 2, 1};
  vector<int> ans;
  ans = temp.getConcatenation(nums);

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }

  return 0;
}