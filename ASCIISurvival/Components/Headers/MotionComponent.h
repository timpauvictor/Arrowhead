#pragma once
#include "Component.h"
#include "../../Utils/Headers/Coordinate.h"

class MotionComponent: public Component
{
    private:
        Coordinate motionVector;

    public:
        void setVector(int, int);
        void setVector(Coordinate);

        Coordinate getVector();
};

