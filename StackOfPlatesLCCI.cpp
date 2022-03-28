#include "StackOfPlatesLCCI.h"
#include <stack>
using namespace std;

StackOfPlates::StackOfPlates(int cap = 1){
    sCap = cap;
}

void StackOfPlates::push(int val) {
    if(sCap == 0)
        return;
    if(vec.size() == 0 || vec.back()->size() >= sCap)
        vec.push_back(new stack<int>);
    vec.back()->push(val);
}

int StackOfPlates::pop() {
    if(vec.size() == 0)
        return -1;
    int lastVal = vec.back()->top();
    vec.back()->pop();
    if(vec.back()->size() == 0){
        delete vec.back();
        vec.pop_back();
    }
    return lastVal;
}

int StackOfPlates::popAt(size_t index) {
    int lastVal = 0;
    if(vec.size() == 0 || vec.size() < index + 1)
        return -1;
    else{
        lastVal = vec[index]->top();
        vec[index]->pop();
        if(vec[index]->size() == 0){
            delete vec[index];
            vec.erase(vec.begin() + index);
        }
    }    
    return lastVal;
}
