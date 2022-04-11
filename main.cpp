#include <iostream>
#include <vector>
#include "AnimalShelterLCCI.h"

int main() {
    /*
    AnimalShelf sol = AnimalShelf();
    std::vector<int> temp;
    std::vector<int> a0 = {0,0};
    std::vector<int> a1 = {1,0};
    std::vector<int> a2 = {2,1};
    sol.enqueue(a0);
    sol.enqueue(a1);
    sol.enqueue(a2);
    temp = sol.dequeueDog();
    std::cout << temp[0] <<' '<< temp[1] << std::endl;
    temp = sol.dequeueCat();
    std::cout << temp[0] <<' '<< temp[1] << std::endl;
    temp = sol.dequeueAny();
    std::cout << temp[0] <<' '<< temp[1] << std::endl;
	return 0;
    */
    AnimalShelf sol = AnimalShelf();
    std::vector<int> temp;
    std::vector<int> a0 = {0,0};
    std::vector<int> a1 = {1,0};
    sol.enqueue(a0);
    sol.enqueue(a1);
    temp = sol.dequeueCat();
    std::cout << temp[0] <<' '<< temp[1] << std::endl;
    temp = sol.dequeueDog();
    std::cout << temp[0] <<' '<< temp[1] << std::endl;
    temp = sol.dequeueAny();
    std::cout << temp[0] <<' '<< temp[1] << std::endl;
	return 0;
}
