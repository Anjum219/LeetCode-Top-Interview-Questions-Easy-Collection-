#include<bits/stdc++.h>
#define ll long long int

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */

    struct node{
    public:
        int val;
        int min_val;

        node( int v, int mv ){
            val = v;
            min_val = mv;
        }
    };

    int min_now;
    stack<node*> ms;

    MinStack() {
        min_now = INT_MAX;
    }

    void push(int x) {
        if( x <= min_now ){
            min_now = x;
        }

        node * n = new node(x, min_now);
        ms.push(n);
    }

    void pop() {
        ms.pop();
        if( ms.size() == 0 )
            min_now = INT_MAX;
        else
            min_now = ms.top()->min_val;
    }

    int top() {
        return ms.top()->val;
    }

    int getMin() {
        return min_now;
    }
};

int main(){
    MinStack* obj = new MinStack();
    obj->push(21);
    obj->push(19);
    obj->push(57);

    cout<<obj->top()<<endl;
    obj->pop();
    cout<<obj->getMin()<<endl;

    return 0;
}
