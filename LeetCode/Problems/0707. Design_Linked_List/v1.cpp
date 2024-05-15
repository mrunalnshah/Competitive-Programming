/*
    Author : Mrunal Nirajkumar Shah
    Date   : 15th of May,2024

    Method : Doubly Linked List.
    LeetCode : https://leetcode.com/problems/design-linked-list/
*/

#include <iostream>

using namespace std;

class MyLinkedList {
  struct DoublyLinkedList {
    int val;
    DoublyLinkedList *next;
    DoublyLinkedList *prev;
  };

  DoublyLinkedList *head;
  DoublyLinkedList *tail;

 public:
  int totalNodes;
  MyLinkedList() {
    totalNodes = -1;
    head = nullptr;
    tail = nullptr;
  }

  int get(int index) {
    if (index < 0 || index > totalNodes || totalNodes == -1) {
      cout << "index : " << index << endl;
      cout << "total nodes : " << totalNodes << endl;
      return -1;
    } else {
      DoublyLinkedList *travel;
      if (totalNodes / 2 >= index) {
        travel = head;
        for (int i = 0; i <= index; i++) {
          if (i == index) {
            return travel->val;
          }
          travel = travel->next;
        }
      } else {
        travel = tail;
        for (int i = totalNodes; i >= index; i--) {
          if (i == index) {
            return travel->val;
          }
          travel = travel->prev;
        }
      }
      return -1;
    }
  }

  void addAtHead(int val) {
    DoublyLinkedList *newNode = new DoublyLinkedList;
    newNode->val = val;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (totalNodes == -1) {
      head = newNode;
      tail = newNode;
    } else {
      head->prev = newNode;
      newNode->next = head;
      head = newNode;
    }
    totalNodes++;
  }

  void addAtTail(int val) {
    DoublyLinkedList *newNode = new DoublyLinkedList;
    newNode->val = val;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (totalNodes == -1) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
    totalNodes++;
  }

  void addAtIndex(int index, int val) {
    if (index <= totalNodes + 1 && index >= 0) {
      DoublyLinkedList *newNode = new DoublyLinkedList;
      newNode->val = val;
      newNode->next = nullptr;
      newNode->prev = nullptr;

      if (index == 0 && totalNodes == -1) {
        head = newNode;
        tail = newNode;
        totalNodes++;
      }
      if (index == 0 && totalNodes > -1) {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;

        totalNodes++;
      }
      if (index > 0 && index <= totalNodes) {
        DoublyLinkedList *travel;
        if (totalNodes / 2 >= index - 1) {
          travel = head;
          for (int i = 0; i <= index; i++) {
            if (i == index - 1) {
              DoublyLinkedList *storeNext = travel->next;
              travel->next = newNode;
              newNode->prev = travel;
              newNode->next = storeNext;
              storeNext->prev = newNode;

              totalNodes++;
            }
            travel = travel->next;
          }
        } else {
          travel = tail;
          for (int i = totalNodes; i >= index - 1; i--) {
            if (i == index - 1) {
              DoublyLinkedList *storeNext = travel->next;
              travel->next = newNode;
              newNode->prev = travel;
              newNode->next = storeNext;
              storeNext->prev = newNode;

              totalNodes++;
            }
            travel = travel->prev;
          }
        }
      }
      if (index > 0 && index == totalNodes + 1) {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

        totalNodes++;
      }
    } else {
      // NOTHING FOR NOW.
    }
  }

  void deleteAtIndex(int index) {
    if (totalNodes != -1 && index >= 0 && index <= totalNodes) {
      if (index == 0 && totalNodes == 0) {
        head = nullptr;
        tail = nullptr;
        totalNodes = -1;
      } else if (index == 0 && totalNodes > 0) {
        head = head->next;
        head->prev = nullptr;
        totalNodes--;
      } else if (index > 0 && index < totalNodes) {
        DoublyLinkedList *travel;
        if (totalNodes / 2 >= index) {
          travel = head;
          for (int i = 0; i <= index; i++) {
            if (i == index) {
              DoublyLinkedList *prevNode = travel->prev;
              DoublyLinkedList *nextNode = travel->next;

              prevNode->next = nextNode;
              nextNode->prev = prevNode;
              totalNodes--;
            }
            travel = travel->next;
          }
        } else {
          travel = tail;
          for (int i = totalNodes; i >= index; i--) {
            if (i == index) {
              DoublyLinkedList *prevNode = travel->prev;
              DoublyLinkedList *nextNode = travel->next;

              prevNode->next = nextNode;
              nextNode->prev = prevNode;

              totalNodes--;
            }
            travel = travel->prev;
          }
        }
      } else if (index == totalNodes) {
        tail = tail->prev;
        tail->next = nullptr;
        totalNodes--;
      } else {
        // NOTHING FOR NOW
      }
    } else {
      // NOTHING FOR NOW
    }
  }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main() {
  MyLinkedList *head = new MyLinkedList();
  head->addAtHead(1);
  head->addAtTail(3);
  head->addAtIndex(1, 2);
  cout << head->get(1) << endl;
  head->deleteAtIndex(1);
  cout << head->get(1) << endl;

  cout << endl;
  cout << "Printing Whole Linked list" << endl;
  int i = 0;
  while (i <= head->totalNodes) {
    cout << head->get(i) << endl;
    i++;
  }
  return 0;
}