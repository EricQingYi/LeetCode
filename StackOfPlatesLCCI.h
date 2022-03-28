#ifndef STACKOFPLATES_H
#define STACKOFPLATES_H

#include <vector>
#include <stack>
using namespace std;

class StackOfPlates {
public:
    StackOfPlates(int cap);
    
    void push(int val);
    
    int pop();
    
    int popAt(size_t index);
private:
    size_t sCap;
    vector<stack<int>* > vec;
};

#endif //STACKOFPLATES_H

/**
 * Your StackOfPlates object will be instantiated and called as such:
 * StackOfPlates* obj = new StackOfPlates(cap);
 * obj->push(val);
 * int param_2 = obj->pop();
 * int param_3 = obj->popAt(index);
 */
