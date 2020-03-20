#pragma once
#include "Component.h"
#include "../../Utils/Headers/Coordinate.h"

class MotionComponent: public Component
{
    private:
        Coordinate motionVector;

    public:
        MotionComponent(int, int, Coordinate);
        void setVector(Coordinate);

        Coordinate getVector();
};

