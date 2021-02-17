#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode * list1 = l1;
    ListNode * list2 = l2;
    ListNode * new_list = new ListNode(0);
    ListNode * point = new_list;

    while( list1 != nullptr && list2 != nullptr ){
        if( list1->val < list2->val ){
            point->next = new ListNode( list1->val );
            list1 = list1->next;
        }
        else if( list2->val < list1->val ){
            point->next = new ListNode( list2->val );
            list2 = list2->next;
        }
        else{
            point->next = new ListNode( list1->val );
            point = point->next;
            point->next = new ListNode( list2->val );
            list1 = list1->next;
            list2 = list2->next;
        }
        point = point->next;
    }

    while( list1 != nullptr ){
        point->next = new ListNode( list1->val );
        point = point->next;
        list1 = list1->next;
    }

    while( list2 != nullptr ){
        point->next = new ListNode( list2->val );
        point = point->next;
        list2 = list2->next;
    }

    return new_list->next;
}

int main(){
    ListNode * l1 = new ListNode(3);
    ListNode * sec = new ListNode(6);
    ListNode * thi = new ListNode(9);
    ListNode * fou = new ListNode(12);

    l1->next = sec;
    sec->next = thi;
    thi->next = fou;

    ListNode * l2 = new ListNode(1);
    ListNode * sec2 = new ListNode(5);
    ListNode * thi2 = new ListNode(18);
    ListNode * fou2 = new ListNode(19);

    l2->next = sec2;
    sec2->next = thi2;
    thi2->next = fou2;

    ListNode * merged_list = mergeTwoLists(l1, l2);

    ListNode * temp = merged_list;
    while( temp != nullptr ){
        cout<<temp->val<<' ';
        temp = temp->next;
    }

    return 0;
}
