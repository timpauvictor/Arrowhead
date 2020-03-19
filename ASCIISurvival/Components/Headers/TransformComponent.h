#pragma once
#include "Component.h"
#include "../../Utils/Headers/Coordinate.h"

class TransformComponent : public Component
{
    private:
        Coordinate coords;
    
    public:
        TransformComponent(int, int, Coordinate);
        int getXCoord();
        int getYCoord();
        Coordinate getCoordinates();
        void setCoordinates(Coordinate);
};

