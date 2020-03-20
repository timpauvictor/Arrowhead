#include "./Headers/MotionComponent.h"

MotionComponent::MotionComponent(int in_ownerID, int in_componentID, Coordinate in_coords)
    : Component(in_ownerID, in_componentID)
{
    motionVector = in_coords;
}

void MotionComponent::setVector(Coordinate in_coords)
{
    motionVector = in_coords;
}

Coordinate MotionComponent::getVector()
{
    return motionVector;
}