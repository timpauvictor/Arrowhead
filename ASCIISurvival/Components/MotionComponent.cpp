#include "./Headers/MotionComponent.h"

void MotionComponent::setVector(int inX, int inY)
{
    motionVector = Coordinate(inX, inY);
};

void MotionComponent::setVector(Coordinate in_coords)
{
    motionVector = in_coords;
}