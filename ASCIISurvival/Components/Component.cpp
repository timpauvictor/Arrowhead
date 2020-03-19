#include "./Headers/Component.h"

Component::Component(int in_ownerID) 
{
    ownerID = in_ownerID;
};

int Component::getComponentID()
{
    return componentID;
}

int Component::getOwnerID()
{
    return ownerID;
}