#include "SortOfStacksLCCI.h"

SortedStack::SortedStack() {
}

void SortedStack::push(int val) {
    if(s1.empty()){
		s1.push(val);
		return;
	}
	while(true){
		if(!s1.empty()){
			if(s1.top() < val){
				s2.push(s1.top());
				s1.pop();
			}	
			else{
				s1.push(val);
				while(!s2.empty()){
					s1.push(s2.top());
					s2.pop();
				}
				break;
			}
		}
		else{
			s1.push(val);
			while(!s2.empty()){
				s1.push(s2.top());
				s2.pop();
			}
			break;
		}
	}
}

void SortedStack::pop() {
	if(s1.empty())
		return;
	s1.pop();
}

int SortedStack::peek() {
	if(!s1.empty())
		return s1.top();
	else
		return -1;
}

bool SortedStack::isEmpty() {
	return s1.empty(); 
}

/**
 * Your SortedStack object will be instantiated and called as such:
 * SortedStack* obj = new SortedStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->isEmpty();
 */
