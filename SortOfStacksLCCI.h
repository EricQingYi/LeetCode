#ifndef SORTOFSTACKSLCCI_H
#define SORTOFSTACKSLCCI_H
#include <vector>
#include <stack>

class SortedStack {
public:
    SortedStack();
    void push(int );
    void pop(); 
    int peek();
    bool isEmpty();
private:
    std::stack<int,std::vector<int> > s1;
    std::stack<int,std::vector<int> > s2;
};

#endif //SORTOFSTACKSLCCI_H

/**
 * Your SortedStack object will be instantiated and called as such:
 * SortedStack* obj = new SortedStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->isEmpty();
 */
