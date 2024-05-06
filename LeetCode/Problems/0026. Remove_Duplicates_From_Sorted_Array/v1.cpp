/*
    Author : Mrunal Nirajkumar Shah
    Date   : 6th of May,2024

    LeetCode : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        int i = 0;
        while(i < nums.size()) {
            int j = i + 1;
            while (j < nums.size()) {
                if (nums[i] == nums[j]) {
                    j++;
                }
                else {
                    break;
                }
            }
            temp.push_back(nums[i]);
            i = j;
        }
        nums = temp;
        return nums.size();
    }
};

int main() {
    Solution temp;
    vector<int> nums = { 0,1,1,3,3,3,4,5,6,6,6,6,6 };

    int size = temp.removeDuplicates(nums);

    cout << size << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
}