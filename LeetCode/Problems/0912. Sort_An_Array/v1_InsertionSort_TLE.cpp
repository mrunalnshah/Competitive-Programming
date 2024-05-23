/*
    Author : Mrunal Nirajkumar Shah
    Date   : 20th of May,2024

    Time Complexity : O(n^2)
    LeetCode : https://leetcode.com/problems/sort-an-array/
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> sortArray(vector<int>& nums) {
    if (nums.empty() || nums.size() == 1) {
      return nums;
    } else {
      for (int i = 1; i < nums.size(); i++) {
        int j = i - 1;
        while (j >= 0 && nums[j + 1] < nums[j]) {
          int temp = nums[j];
          nums[j] = nums[j + 1];
          nums[j + 1] = temp;

          j--;
        }
      }
    }
    return nums;
  }
};

int main() {
  Solution temp;
  vector<int> myArray = {5, 1, 1, 2, 0, 0};
  myArray = temp.sortArray(myArray);

  cout << "Sorted Array is " << endl;
  for (int i = 0; i < myArray.size(); i++) {
    cout << myArray[i] << endl;
  }
  return 0;
}