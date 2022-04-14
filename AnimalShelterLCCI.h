#ifndef ANIMALSHELF_H
#define ANIMALSHELF_H
#include <vector>

namespace ani{
    struct ListNode{
        ListNode(std::vector<int> &ani):animal(ani), p_next(NULL){}
        std::vector<int> animal;
        ListNode* p_next;
    };
}

class AnimalShelf {
public:
    AnimalShelf();
    
    void enqueue(std::vector<int> &animal);
    
    std::vector<int> dequeueAny();
    
    std::vector<int> dequeueDog();
    
    std::vector<int> dequeueCat();
private:
    ani::ListNode* p_fCat;
    ani::ListNode* p_bCat;
    ani::ListNode* p_fDog;
    ani::ListNode* p_bDog;
};

#endif //ANIMALSHELF_H

/**
 * Your AnimalShelf object will be instantiated and called as such:
 * AnimalShelf* obj = new AnimalShelf();
 * obj->enqueue(animal);
 * vector<int> param_2 = obj->dequeueAny();
 * vector<int> param_3 = obj->dequeueDog();
 * vector<int> param_4 = obj->dequeueCat();
 */
