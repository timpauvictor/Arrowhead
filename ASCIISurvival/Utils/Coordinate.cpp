#include "../Headers/Utils/Coordinate.h"

Coordinate::Coordinate(int in_X, int in_Y) 
{
    X = in_X;
    Y = in_Y;
};

Coordinate::Coordinate()
{
    X = 0;
    Y = 0;
};

int Coordinate::getX()
{
    return X;
}

int Coordinate::getY()
{
    return Y;
}
