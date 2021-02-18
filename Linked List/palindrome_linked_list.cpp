#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool isPalindrome(ListNode* head) {
    int len = 0;
    ListNode * hare = head;
    ListNode * tortoise = head;
    stack<int> left;

    while( tortoise != nullptr ){
        if( tortoise->next != nullptr ){
            tortoise = tortoise->next->next;
        }
        else{
            hare = hare->next;
            break;
        }

        left.push(hare->val);
        hare = hare->next;
        len++;
    }

    if( hare == nullptr )
        return true;

    int i = 0;

    while( i < len ){
        int right = hare->val;
        if( left.top() != right )
            return false;

        left.pop();
        hare = hare->next;
        i++;
    }

    return true;
}

int main(){
    ListNode * head = new ListNode(1);
    ListNode * sec = new ListNode(2);
    ListNode * thi = new ListNode(4);
    ListNode * fou = new ListNode(2);
    ListNode * fif = new ListNode(1);

    head->next = sec;
    sec->next = thi;
    thi->next = fou;
    fou->next = fif;

    cout<<isPalindrome(head)<<endl;

    return 0;
}
