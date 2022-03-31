#include <iostream>
#include "ImplementQueueUsingStacksLCCI.h"
using namespace std;

int main() {
    MyQueue sol;
    sol.push(1);
    sol.push(2);
    sol.push(3);
    cout << sol.peek() << ' ';
    cout << sol.pop() << ' ';
    cout << sol.peek() << ' ';
    sol.push(4);
    cout << sol.peek() << endl;
    return 0;
}
