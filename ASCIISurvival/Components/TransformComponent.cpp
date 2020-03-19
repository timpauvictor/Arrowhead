#include "./Headers/TransformComponent.h"


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