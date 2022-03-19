#include <iostream>
#include "MinStack_LCCI.h"
using namespace std;

int main() {
    MinStack sol;
    sol.push(3);
    cout << "Min:"<< sol.getMin()<<' '<<"Top:"<< sol.top()<< endl;
    sol.push(1);
    cout << "Min:"<< sol.getMin()<<' '<<"Top:"<< sol.top()<< endl;
    sol.push(2);
    cout << "Min:"<< sol.getMin()<<' '<<"Top:"<< sol.top()<< endl;
    
    return 0;
}
