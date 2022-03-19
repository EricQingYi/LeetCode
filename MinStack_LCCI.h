#ifndef MINSTACK_H
#define MINSTACK_H
#include <stack>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack();
    
    void push(int x);
    
    void pop();
    
    int top();
    
    int getMin();
private:
    stack<int> s;
    stack<int> ms;
};
#endif //MINSTACK_H

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

