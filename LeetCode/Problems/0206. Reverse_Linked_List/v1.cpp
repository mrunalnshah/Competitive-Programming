/*
    Author : Mrunal Nirajkumar Shah
    Date   : 13th of May,2024

    LeetCode : https://leetcode.com/problems/reverse-linked-list/
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
    ListNode* reverseList(ListNode* head) {
        ListNode *currentNode = nullptr;
        ListNode *prevNode = nullptr;
        ListNode *nextNode = nullptr;

        if(head && head->next && head->next->next){
            prevNode = head;
            currentNode = head->next;
            nextNode = head->next->next;

            while(nextNode != nullptr){
                currentNode->next = prevNode;
                prevNode = currentNode;
                currentNode = nextNode;
                nextNode = nextNode->next;
            }
            head->next = nullptr;
            currentNode->next = prevNode;
            head = currentNode;
        }else if(head && head->next){
            prevNode = head;
            currentNode = head->next;
            currentNode->next = prevNode;
            head->next = nullptr;
            head = currentNode;
        }else{
            return head;
        }
        return head;
    }
};

int main(){
    ListNode *head = new ListNode;
    ListNode *node1 = new ListNode;
    ListNode *node2 = new ListNode;
    ListNode *node3 = new ListNode;
    ListNode *node4 = new ListNode;
    ListNode *node5 = new ListNode;

    node1->val = 1;
    node2->val = 2;
    node3->val = 3;
    node4->val = 4;
    node5->val = 5;

    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = nullptr;

    ListNode *beforeReverse = head;
    while(beforeReverse != nullptr){
        cout << beforeReverse->val << endl;
        beforeReverse = beforeReverse->next;
    }

    Solution temp1;
    head = temp1.reverseList(head);
    cout << "After Reverse" << endl;
    ListNode *temp = head;
    while(temp != nullptr){
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}