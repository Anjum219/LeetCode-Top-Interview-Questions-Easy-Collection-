#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode * temp = head;
    int sz = 1;
    while( temp->next != nullptr ){
        temp = temp->next;
        sz++;
    }

    int i = 1;
    temp = head;
    while( i < sz-n ){
        temp = temp->next;
        i++;
    }

    if( n == sz ){
        head = head->next;
    }
    else if( n == 1 ){
        temp->next = nullptr;
    }
    else{
        temp->next = temp->next->next;
    }

    return head;
}

int main(){
    ListNode * head = new ListNode(3);
    ListNode * sec = new ListNode(6);
    ListNode * thi = new ListNode(9);
    ListNode * fou = new ListNode(12);

    head->next = sec;
    sec->next = thi;
    thi->next = fou;

    removeNthFromEnd(head, 3);

    ListNode * temp = head;
    while( temp != nullptr ){
        cout<<temp->val<<' ';
        temp = temp->next;
    }

    return 0;
}
