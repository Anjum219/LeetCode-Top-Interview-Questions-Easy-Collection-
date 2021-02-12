#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

 void deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

int main(){
    ListNode * head = new ListNode(3);
    ListNode * sec = new ListNode(6);
    ListNode * thi = new ListNode(9);
    ListNode * fou = new ListNode(12);

    head->next = sec;
    sec->next = thi;
    thi->next = fou;
    deleteNode(sec);

    ListNode * temp = head;
    while( temp != nullptr ){
        cout<<temp->val<<' ';
        temp = temp->next;
    }

    return 0;
}
