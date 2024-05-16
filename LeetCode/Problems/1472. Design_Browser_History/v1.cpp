/*
    Author : Mrunal Nirajkumar Shah
    Date   : 16th of May,2024

    Wrong Answers = 2
    LeetCode : https://leetcode.com/problems/design-browser-history/
*/

#include <iostream>

using namespace std;

class BrowserHistory {
  struct DoublyLinkedList {
    string url;
    DoublyLinkedList *prev = nullptr;
    DoublyLinkedList *next = nullptr;
  };

 public:
  DoublyLinkedList *head = nullptr;
  DoublyLinkedList *tail = nullptr;
  DoublyLinkedList *current = nullptr;

  int totalUrl = -1;
  int index = -1;
  BrowserHistory(string homepage) {
    DoublyLinkedList *newNode = new DoublyLinkedList;
    newNode->url = homepage;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    head = newNode;
    tail = newNode;
    current = newNode;

    totalUrl = 0;
    index = 0;
  }

  void visit(string url) {
    DoublyLinkedList *newNode = new DoublyLinkedList;
    newNode->url = url;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    if (current == tail) {
      current->next = newNode;
      newNode->prev = current;
      current = newNode;
      tail = newNode;
      totalUrl++;
      index++;
    } else {
      current->next = newNode;
      newNode->prev = current;
      current = newNode;
      tail = newNode;
      index++;
      totalUrl = index;
    }
  }

  string back(int steps) {
    if (index >= steps) {
      DoublyLinkedList *travel = current;
      while (steps != 0) {
        travel = travel->prev;
        steps--;
        index--;
      }
      current = travel;
    } else {
      current = head;
      index = 0;
    }
    return current->url;
  }

  string forward(int steps) {
    if (totalUrl - index > steps) {
      DoublyLinkedList *travel = current;
      while (steps != 0) {
        travel = travel->next;
        steps--;
        index++;
      }
      current = travel;
    } else {
      current = tail;
      index = totalUrl;
    }
    return current->url;
  }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

int main() {
  /*
    // Test Case : 1
    BrowserHistory *browserHistory = new BrowserHistory("icpbj.com");
    cout << browserHistory->back(1) << endl;
    cout << browserHistory->back(10) << endl;
    browserHistory->visit("xbepk.com");
    cout << browserHistory->forward(8) << endl;
    browserHistory->visit("kls.com");
    browserHistory->visit("dlkwxpf.com");
    browserHistory->visit("pnep.com");
    cout << browserHistory->back(9) << endl;
    browserHistory->visit("rmis.com");
    browserHistory->visit("bxf.com");
    browserHistory->visit("dz.com");
    cout << browserHistory->back(2) << endl;
    browserHistory->visit("acuqsax.com");
    browserHistory->visit("dcvo.com");
    browserHistory->visit("ijbg.com");
    browserHistory->visit("nlott.com");
    cout << browserHistory->back(7) << endl;
    browserHistory->visit("dd.com");
    browserHistory->visit("vssnq.com");
    browserHistory->visit("teur.com");
    browserHistory->visit("pn.com");
    browserHistory->visit("szi.com");
    browserHistory->visit("brhldg.com");
    browserHistory->visit("yulyoqv.com");
    cout << browserHistory->back(4) << endl;
    cout << browserHistory->forward(10) << endl;
    cout << browserHistory->back(8) << endl;
    cout << browserHistory->forward(5) << endl;
    browserHistory->visit("av.com");
    cout << browserHistory->back(3) << endl;
    browserHistory->visit("okr.com");
    browserHistory->visit("meli.com");
  */
  /*
  Expected OUTPUT :
  [null,"icpbj.com","icpbj.com",null,"xbepk.com",null,null,null,"icpbj.com",null,null,null,
  "rmis.com",null,null,null,null,"icpbj.com",null,null,null,null,null,null,null,"teur.com",
  "yulyoqv.com","icpbj.com","szi.com",null,"teur.com",null,null]...
  */

  // TEST CASE 2
  BrowserHistory *browserHistory = new BrowserHistory("vvlf.com");
  browserHistory->visit("rwrjffk.com");
  cout << browserHistory->back(9) << endl;
  cout << browserHistory->back(6) << endl;
  cout << browserHistory->back(10) << endl;
  cout << browserHistory->forward(6) << endl;
  cout << browserHistory->forward(5) << endl;
  browserHistory->visit("af.com");
  browserHistory->visit("jjuulz.com");
  browserHistory->visit("vqthh.com");
  browserHistory->visit("viw.com");
  browserHistory->visit("mvvxuo.com");
  browserHistory->visit("sezid.com");
  browserHistory->visit("ncbnmr.com");
  browserHistory->visit("qehugwp.com");
  cout << browserHistory->back(7) << endl;  //
  browserHistory->visit("wg.com");
  cout << browserHistory->forward(9) << endl;
  cout << browserHistory->back(6) << endl;
  cout << browserHistory->back(4) << endl;
  cout << browserHistory->forward(2) << endl;
  browserHistory->visit("foy.com");
  browserHistory->visit("szi.com");
  browserHistory->visit("yqxprn.com");
  cout << browserHistory->back(9) << endl;
  browserHistory->visit("pmgoa.com");
  cout << browserHistory->forward(3) << endl;
  browserHistory->visit("dkik.com");
  browserHistory->visit("mxlcs.com");
  browserHistory->visit("mvs.com");
  browserHistory->visit("uuto.com");
  cout << browserHistory->back(4) << endl;
  cout << browserHistory->back(1) << endl;
  browserHistory->visit("mdhkz.com");
  cout << browserHistory->back(9) << endl;
  cout << browserHistory->back(9) << endl;
  cout << browserHistory->forward(9) << endl;
  browserHistory->visit("zwcc.com");
  browserHistory->visit("afsdng.com");
  cout << browserHistory->back(6) << endl;
  cout << browserHistory->forward(1) << endl;
  cout << browserHistory->back(3) << endl;
  /*
  Expected OUTPUT :
  [null,null,"vvlf.com","vvlf.com","vvlf.com","rwrjffk.com","rwrjffk.com",null,null,
  null,null,null,null,null,null,"af.com",null,"wg.com","vvlf.com","vvlf.com","af.com",null,null,
  null,"vvlf.com",null,"pmgoa.com",null,null,null,null,"pmgoa.com","vvlf.com",null,"mdhkz.com","vvlf.com",
  null,null,"vvlf.com","zwcc.com","afsdng.com"]...
  */

  return 0;
}