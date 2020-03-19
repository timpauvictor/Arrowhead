#pragma once
#include "Component.h"
#include "Coordinate.h"

class TransformComponent : public Component
{
    private:
        Coordinate coords;
    
    public:
        TransformComponent(int, int);
        TransformComponent(Coordinate);
        TransformComponent();
        int getXCoord();
        int getYCoord();
        Coordinate getCoordinates();
};

