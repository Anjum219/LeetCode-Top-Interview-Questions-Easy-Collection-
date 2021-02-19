#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int pos = 1;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    map<ListNode *, bool> visited;
    ListNode * temp = head;

    while( temp != nullptr ){
        if( visited[temp] == true )
            return true;

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

int main(){
    ListNode * head = new ListNode(3);
    ListNode * sec = new ListNode(6);
    ListNode * thi = new ListNode(9);
    ListNode * fou = new ListNode(12);

    head->next = sec;
    sec->next = thi;
    thi->next = fou;
    fou->next = sec;

    cout<<hasCycle(head)<<endl;

    return 0;
}
