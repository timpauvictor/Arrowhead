#include "./Headers/Manager.h"

int Manager::getSize()
{
    return container.size();
};

void Manager::addComponent(Component in_newComponent)
{
    container.push_back(in_newComponent);
    latest = findByIndex(getSize());
};

Component* Manager::findByIndex(int index)
{
    return &container.at(index);
};

Component* Manager::findByID(int ID)
{
    for (int i = 0; i < getSize(); i++) 
    {
        Component* currentElement = findByIndex(i);
        if (currentElement->getComponentID() == ID)
        {
            return currentElement;
        }
    }
}

Component* Manager::getLatest()
{
    return latest;
}