/*
    Author : Mrunal Nirajkumar Shah
    Date   : 17th of May,2024
	
	Submission Accepted at : 4
    LeetCode : https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      int size = students.size();
      int count = 0;

      while(!students.empty() && count < students.size()){
        if(students[0] == sandwiches[0]){
          students.erase(students.begin());
          sandwiches.erase(sandwiches.begin());
          count = 0;
        }else {
          students.push_back(students[0]);
          students.erase(students.begin());
          count++;
        }
      }
      return students.size(); 
    }
};

int main(){
  Solution temp;
  vector<int> student = {1,1,1,0,0,1};
  vector<int> sandwich ={1,0,0,0,1,1};
  int count = temp.countStudents(student, sandwich);
  
  cout << count << endl;
  return 0;
}