#include "./Headers/EntityManager.h"

EntityManager::EntityManager()
{
    //do nothing
};

int EntityManager::getSize() 
{
    container.size();
};

void EntityManager::addActor(Actor in_newActor) {
    container.push_back(in_newActor);
};