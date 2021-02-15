#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode * curr_node = head;
    ListNode * prev_node = NULL;
    ListNode * next_node = head;

    while( curr_node ){
        next_node = curr_node->next;
        curr_node->next = prev_node;
        prev_node = curr_node;
        curr_node = next_node;
    }
    return prev_node;
}

int main(){
    ListNode * head = new ListNode(3);
    ListNode * sec = new ListNode(6);
    ListNode * thi = new ListNode(9);
    ListNode * fou = new ListNode(12);

    head->next = sec;
    sec->next = thi;
    thi->next = fou;

    ListNode * reversed_list = reverseList(head);

    ListNode * temp = reversed_list;
    while( temp != nullptr ){
        cout<<temp->val<<' ';
        temp = temp->next;
    }

    return 0;
}
