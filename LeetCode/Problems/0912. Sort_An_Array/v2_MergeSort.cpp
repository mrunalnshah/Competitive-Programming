/*
    Author : Mrunal Nirajkumar Shah
    Date   : 23th of May,2024

    Time Complexity : O(n log n)
    LeetCode : https://leetcode.com/problems/sort-an-array/
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void merge(vector<int>& nums, int left, int middle, int right) {
    int leftArray_size = middle - (left - 1);
    int rightArray_size = right - middle;

    vector<int> leftArray;
    vector<int> rightArray;

    for (int i = 0; i < leftArray_size; i++) {
      leftArray.push_back(nums[left + i]);
    }
    for (int i = 0; i < rightArray_size; i++) {
      rightArray.push_back(nums[middle + 1 + i]);
    }

    int i = 0;
    int j = 0;
    int k = left;
    while (i < leftArray_size && j < rightArray_size) {
      if (leftArray[i] <= rightArray[j]) {
        nums[k] = leftArray[i];
        i++;
        k++;
      } else {
        nums[k] = rightArray[j];
        j++;
        k++;
      }
    }
    while (i < leftArray_size) {
      nums[k] = leftArray[i];
      i++;
      k++;
    }
    while (j < rightArray_size) {
      nums[k] = rightArray[j];
      j++;
      k++;
    }
  }

  void mergeSort(vector<int>& nums, int start, int end) {
    if (start < end) {
      int middle = (start + end) / 2;
      mergeSort(nums, start, middle);
      mergeSort(nums, middle + 1, end);

      merge(nums, start, middle, end);
    }
  }

  vector<int> sortArray(vector<int>& nums) {
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
  }
};

int main() {
  vector<int> nums = {5, 3, 5, 7, 1, 4, 2, 3, 1, 0};

  Solution temp;
  temp.sortArray(nums);

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << endl;
  }
  return 0;
}