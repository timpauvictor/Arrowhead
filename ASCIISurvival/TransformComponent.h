#pragma once
#include "Component.h"
#include "Coordinate.h"

class TransformComponent : public Component
{
    private:
        int xCoord;
        int yCoord;
    
    public:
        TransformComponent(int, int);
        TransformComponent(Coordinate);
        int getXCoord();
        int getYCoord();
        //Coordinate getCoordinates();
        void setXCoord(int newX);
        void setYCoord(int newY);
};

