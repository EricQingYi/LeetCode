#include "AnimalShelterLCCI.h"
#include <vector>

AnimalShelf::AnimalShelf(){
    p_fCat = NULL;
    p_bCat = NULL;
    p_fDog = NULL;
    p_bDog = NULL;
}
    
void AnimalShelf::enqueue(std::vector<int> animal) {
    ani::ListNode* p_temp = NULL;
    if(animal[1] == 0){// animal is cat.
        if(p_fCat == NULL){// cats queue is empty.
            p_fCat = new ani::ListNode(animal);
            p_bCat = p_fCat;
        }
        else{// cats queue is not empty.
            p_temp = new ani::ListNode(animal);
            p_bCat->p_next = p_temp;
            p_bCat = p_temp;
        }
    }
    else{// animal is dog.
        if(p_fDog == NULL){// dogs queue is empty.
            p_fDog = new ani::ListNode(animal);
            p_bDog = p_fDog;
        }
        else{// dogs queue is not empty.
            p_temp = new ani::ListNode(animal);
            p_bDog->p_next = p_temp;
            p_bDog = p_temp;
        }
    }
}

std::vector<int> AnimalShelf::dequeueAny() {
    if(p_fCat == NULL && p_fDog == NULL)
        return std::vector<int>(2,-1);
    else if(p_fCat == NULL)
        return dequeueDog();
    else if(p_fDog == NULL)
        return dequeueCat();
    else{
        if(p_fCat->animal[0] <= p_fDog->animal[0])
            return dequeueCat();
        else
            return dequeueDog();
    }
}

std::vector<int> AnimalShelf::dequeueDog() {
    if(p_fDog == NULL)
        return std::vector<int>(2,-1);
    ani::ListNode* p_temp = NULL;
    std::vector<int> temp;
    p_temp = p_fDog;
    temp = p_fDog->animal;
    p_fDog = p_fDog->p_next;
    delete p_temp;
    return temp;
}

std::vector<int> AnimalShelf::dequeueCat() {
    if(p_fCat == NULL)
        return std::vector<int>(2,-1);
    ani::ListNode* p_temp = NULL;
    std::vector<int> temp;
    p_temp = p_fCat;
    temp = p_fCat->animal;
    p_fCat = p_fCat->p_next;
    delete p_temp;
    return temp;
}

/**
 * Your AnimalShelf object will be instantiated and called as such:
 * AnimalShelf* obj = new AnimalShelf();
 * obj->enqueue(animal);
 * vector<int> param_2 = obj->dequeueAny();
 * vector<int> param_3 = obj->dequeueDog();
 * vector<int> param_4 = obj->dequeueCat();
 */
