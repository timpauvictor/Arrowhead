#pragma once
#include <vector>
#include "../Headers/Actor.h"
#include "Manager.h"
#include "Component.h"

class EntityManager: public Manager
{
    public:
        void addActor(Actor);
};


