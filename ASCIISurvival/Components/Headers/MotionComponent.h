#pragma once
#include "Component.h"
#include "../../Utils/Headers/Coordinate.h"

class MotionComponent
{
    private:
        Coordinate motionVector;

    public:
        MotionComponent(int, int);
        MotionComponent(Coordinate);
        MotionComponent();
};

