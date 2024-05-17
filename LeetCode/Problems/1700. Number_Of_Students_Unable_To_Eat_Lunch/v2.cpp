/*
    Author : Mrunal Nirajkumar Shah
    Date   : 17th of May,2024
	
	Submission Accepted at : 3
    LeetCode : https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      queue<int> studentQueue;
      for(int student : students){
        studentQueue.push(student);
      }
      int sandwitchTop = 0;
      int size = students.size();
      int count = 0;

      while(!studentQueue.empty() && count < studentQueue.size()){
        if(studentQueue.front() == sandwiches[sandwitchTop]){
          studentQueue.pop();
          sandwitchTop++;
          count = 0;
        }else {
          int student = studentQueue.front();
          studentQueue.pop();
          studentQueue.push(student);
          count++;
        }
      }
      return studentQueue.size();
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