#include "ImplementQueueUsingStacksLCCI.h"

/** Initialize your data structure here. */
MyQueue::MyQueue() {}

/** Push element x to the back of queue. */
void MyQueue::push(int x) {
    if(s0.empty())
        switchElm();
    s0.push(x);  
}

/** Removes the element from in front of queue and returns that element. */
int MyQueue::pop() {
    if(empty())
        return -1;
    int elm = 0;
    if(s1.empty())
        switchElm();
    elm = s1.top();
    s1.pop();
    return elm;
}

/** Get the front element. */
int MyQueue::peek() {
    if(empty())
        return -1;
    if(s1.empty())
        switchElm();
    return s1.top(); 
}

/** Returns whether the queue is empty. */
bool MyQueue::empty() {
    return s0.empty() && s1.empty();
}

void MyQueue::switchElm(){
    int elm = 0;
    if(s0.empty()){
        while(!s1.empty()){
            elm = s1.top();
            s1.pop();
            s0.push(elm);
        }
    } 
    else{
        while(!s0.empty()){
            elm = s0.top();
            s0.pop();
            s1.push(elm);
        }
    }
}
