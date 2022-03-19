#include "MinStack_LCCI.h"
#include <stack>
using namespace std;

MinStack::MinStack():s(),ms(){
}

void MinStack::push(int x) {
    s.push(x);
    if(ms.empty()){
        ms.push(x);
    }
    else{
        if(x <= ms.top()){
           ms.push(x);
        }
        else{
           ms.push(ms.top());    
        }
    }
}

void MinStack::pop() {
    s.pop();
    ms.pop();
}

int MinStack::top() {
    return s.top();
}

int MinStack::getMin() {
    return ms.top();
}
