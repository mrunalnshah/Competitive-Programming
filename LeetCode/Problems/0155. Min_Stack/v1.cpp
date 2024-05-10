/*
    Author : Mrunal Nirajkumar Shah
    Date   : 10th of May,2024

    LeetCode : https://leetcode.com/problems/min-stack/
	
	NOTE : RunTime is not good but Memory Efficient
*/


#include <iostream>

using namespace std;

class MinStack {
  int capacity = 1;
  int mytop = -1;

  int *arr = new int[capacity];

  void resize() {
    capacity = capacity * 2;
    int *newArr = new int[capacity];

    for (int i = 0; i <= mytop; i++) {
      newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
  }

 public:
  MinStack() {}

  void push(int val) {
    if (mytop < capacity - 1) {
      arr[++mytop] = val;
    } else {
      resize();
      push(val);
    }
  }

  void pop() { --mytop; }

  int top() { return arr[mytop]; }

  int getMin() {
    int min = arr[0];
    for (int i = 1; i <= mytop; i++) {
      if (min > arr[i]) {
        min = arr[i];
      } else {
        continue;
      }
    }
    return min;
  }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {
  MinStack temp;

  temp.push(-2);
  temp.push(0);
  temp.push(-3);
  cout << temp.getMin() << endl;
  temp.pop();
  cout << temp.top() << endl;
  cout << temp.getMin() << endl;

  return 0;
}