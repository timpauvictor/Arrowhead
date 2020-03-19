#include "./Headers/TransformComponent.h"

TransformComponent::TransformComponent(int in_ownerID, int in_componentID, Coordinate in_coords) 
    : Component(in_ownerID, in_componentID)
{
    coords = in_coords;
};

int TransformComponent::getXCoord()
{
    return coords.getX();
}

int TransformComponent::getYCoord()
{
    return coords.getY();
}

Coordinate TransformComponent::getCoordinates()
{
    return coords;
}

void TransformComponent::setCoordinates(Coordinate in_coords)
{
    coords = in_coords;
}