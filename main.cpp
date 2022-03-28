#include <iostream>
#include "StackOfPlatesLCCI.h"
using namespace std;

int main() {
    StackOfPlates sol(2);
    sol.push(1);
    sol.push(2);
    sol.push(3);
    cout << sol.popAt(0) << ' ';
    cout << sol.popAt(0) << ' ';
    cout << sol.popAt(0) << ' ';
    cout << sol.popAt(0) << endl;
    return 0;
}
