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
    ListNode *result = NULL;
    if (list1 == NULL)
      return (list2);
    else if (list2 == NULL)
      return (list1);

    if (list1->val <= list2->val) {
      result = list1;
      result->next = mergeTwoLists(list1->next, list2);
    } else {
      result = list2;
      result->next = mergeTwoLists(list1, list2->next);
    }
    return (result);
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