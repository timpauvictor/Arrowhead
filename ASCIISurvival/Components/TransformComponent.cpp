#include "./Headers/TransformComponent.h"

TransformComponent::TransformComponent(int in_X, int in_Y)
{
    coords = Coordinate(in_X, in_Y);
};

TransformComponent::TransformComponent(Coordinate in_coords)
{
    coords = in_coords;
};

TransformComponent::TransformComponent() {
    coords = Coordinate(0, 0);
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