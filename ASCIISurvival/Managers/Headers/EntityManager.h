#pragma once
#include <vector>
#include "../Headers/Actor.h"

class EntityManager
{
    private:
        std::vector<Actor> container;

    public:
        int getSize();
        void addActor(Actor);
        Actor getIndex(int in_index);
        Actor getLatest();
        int find(int);
};


