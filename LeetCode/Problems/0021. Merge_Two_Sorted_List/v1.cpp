/*
    Author : Mrunal Nirajkumar Shah
    Date   : 13th of May,2024

    LeetCode : https://leetcode.com/problems/merge-two-sorted-lists/
*/

#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    int totalNodes = -1;

    while (list1 != nullptr && list2 != nullptr) {
      ListNode *newNode = new ListNode;
      if (list1->val <= list2->val) {
        newNode->val = list1->val;
        newNode->next = nullptr;

        list1 = list1->next;
      } else {
        newNode->val = list2->val;
        list2 = list2->next;
      }

      if (head == nullptr) {
        head = newNode;
        tail = newNode;
      } else {
        tail->next = newNode;
        tail = newNode;
      }
      totalNodes++;
    }
    while (list1 != nullptr) {
      ListNode *newNode = new ListNode;
      newNode->val = list1->val;
      newNode->next = nullptr;

      if (head == nullptr) {
        head = newNode;
        tail = newNode;
      } else {
        tail->next = newNode;
        tail = newNode;
      }
      list1 = list1->next;
      totalNodes++;
    }
    while (list2 != nullptr) {
      ListNode *newNode = new ListNode;
      newNode->val = list2->val;
      newNode->next = nullptr;

      if (head == nullptr) {
        head = newNode;
        tail = newNode;
      } else {
        tail->next = newNode;
        tail = newNode;
      }
      list2 = list2->next;
      totalNodes++;
    }

    return head;
  }
};

int main() {
  ListNode *list1 = nullptr;
  ListNode *node11 = new ListNode;
  ListNode *node12 = new ListNode;
  ListNode *node13 = new ListNode;
  ListNode *node14 = new ListNode;
  ListNode *node15 = new ListNode;

  ListNode *list2 = nullptr;
  ListNode *node21 = new ListNode;
  ListNode *node22 = new ListNode;
  ListNode *node23 = new ListNode;
  ListNode *node24 = new ListNode;

  list1 = node11;
  node11->val = 1;
  node12->val = 2;
  node13->val = 2;
  node14->val = 6;
  node15->val = 9;

  list2 = node21;
  node21->val = 1;
  node22->val = 2;
  node23->val = 3;
  node24->val = 5;

  node11->next = node12;
  node12->next = node13;
  node13->next = node14;
  node14->next = node15;
  node15->next = nullptr;

  node21->next = node22;
  node22->next = node23;
  node23->next = node24;
  node24->next = nullptr;

  cout << "MERGING" << endl;
  Solution temp;
  ListNode *head = new ListNode;
  head = temp.mergeTwoLists(list1, list2);
  cout << head << endl;

  while (head != nullptr) {
    cout << head->val << endl;
    head = head->next;
  }

  return 0;
}