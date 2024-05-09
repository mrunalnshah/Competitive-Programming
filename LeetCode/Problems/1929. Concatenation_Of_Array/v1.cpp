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
    vector<int> ans;
    ans = nums;
    for (int i = 0; i < nums.size(); i++) {
      ans.push_back(nums[i]);
    }

    return ans;
  }
};

int main() {
  Solution temp;

  vector<int> nums = {1, 3, 2, 1};
  vector<int> ans;
  ans = temp.getConcatenation(nums);

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }

  return 0;
}