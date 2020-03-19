#include "./Headers/Component.h"

Component::Component() 
{
    ownerID = 0;
    componentID = 0;
};

Component::Component(int in_ownerID, int in_componentID)
{
    ownerID = in_ownerID;
    componentID = in_componentID;
};

Component::Component(int in_componentID)
{
    ownerID = -1;
    componentID = in_componentID;
}

int Component::getComponentID()
{
    return componentID;
}

int Component::getOwnerID()
{
    return ownerID;
}

void Component::setComponentID(int in_newID)
{
    componentID = in_newID;
};

