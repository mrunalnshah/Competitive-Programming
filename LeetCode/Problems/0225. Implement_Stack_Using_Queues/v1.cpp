/*
    Author : Mrunal Nirajkumar Shah
    Date   : 17th of May,2024

    LeetCode : https://leetcode.com/problems/implement-stack-using-queues/
*/

#include <iostream>

using namespace std;

class Queue {
  struct SinglyLinkedList {
    int data;
    SinglyLinkedList *next = nullptr;
  };
  SinglyLinkedList *head = nullptr;
  SinglyLinkedList *tail = nullptr;

  int totalNodes = -1;

 public:
  ~Queue() {
    while (head != nullptr) {
      SinglyLinkedList *temp = head;
      head = head->next;
      delete temp;
    }
  }

  void push(int data) {
    SinglyLinkedList *newNode = new SinglyLinkedList;
    newNode->data = data;
    newNode->next = nullptr;

    if (totalNodes == -1) {
      head = newNode;
      tail = newNode;
      totalNodes = 0;
    } else {
      tail->next = newNode;
      tail = newNode;
      totalNodes++;
    }
  }

  int pop() {
    int data;
    data = head->data;
    if (totalNodes == 0) {
      head = nullptr;
      tail = nullptr;
      totalNodes = -1;
    } else {
      head = head->next;
      totalNodes--;
    }
    return data;
  }

  int size() {
    SinglyLinkedList *travel = head;

    int size = 0;
    while (travel != nullptr) {
      size++;
      travel = travel->next;
    }
    return size;
  }

  bool is_empty() {
    int isSize = size();
    if (isSize == 0) {
      return true;
    } else {
      return false;
    }
  }
};

class MyStack {
  Queue *mainQueue = new Queue;
  Queue *tempQueue = new Queue;
  int totalIndex = -1;

 public:
  MyStack() {}

  void push(int x) {
    mainQueue->push(x);
    totalIndex++;
  }

  int pop() {
    int data = -1;
    for (int i = 0; i <= totalIndex; i++) {
      if (i == totalIndex) {
        data = mainQueue->pop();
      } else {
        tempQueue->push(mainQueue->pop());
      }
    }
    for (int i = 0; i < totalIndex; i++) {
      mainQueue->push(tempQueue->pop());
    }
    totalIndex--;
    return data;
  }

  int top() {
    int data = -1;
    for (int i = 0; i <= totalIndex; i++) {
      if (i == totalIndex) {
        data = mainQueue->pop();
        tempQueue->push(data);
      } else {
        tempQueue->push(mainQueue->pop());
      }
    }
    for (int i = 0; i <= totalIndex; i++) {
      mainQueue->push(tempQueue->pop());
    }
    return data;
  }

  bool empty() {
    if (mainQueue->is_empty()) {
      return true;
    } else {
      return false;
    }
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main() {
  MyStack *obj = new MyStack;
  obj->push(1);
  obj->push(2);
  cout << obj->top() << endl;
  cout << obj->pop() << endl;
  if (obj->empty()) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }
  return 0;
}