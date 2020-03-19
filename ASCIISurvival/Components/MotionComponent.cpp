#include "./Headers/MotionComponent.h"

MotionComponent::MotionComponent(int in_X, int in_Y)
{
    motionVector = Coordinate(in_X, in_Y);
};

MotionComponent::MotionComponent(Coordinate in_motionVector)
{
    motionVector = in_motionVector;
};

MotionComponent::MotionComponent()
{
    motionVector = Coordinate(0, 0);
};