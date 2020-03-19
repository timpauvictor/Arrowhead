#pragma once
#include <vector>
#include "../Components/Headers/Component.h"

class Manager
{
    private:
        std::vector<Component> container;
        Component* latest;

    public:
        int getSize();
        void addComponent(Component);
        Component* findByIndex(int);
        Component* findByID(int);
        Component* getLatest();
};

