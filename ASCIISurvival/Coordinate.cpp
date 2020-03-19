#include "Coordinate.h"

Coordinate::Coordinate(int in_X, int in_Y) 
{
    X = in_X;
    Y = in_Y;
};

int Coordinate::getX()
{
    return X;
}

int Coordinate::getY()
{
    return Y;
}
