#pragma once
#include <vector>
#include "../Components/Headers/Actor.h"
#include "Manager.h"

class EntityManager: public Manager
{
    public:
        void addActor(Actor);
};


