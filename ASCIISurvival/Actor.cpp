#include "./Headers/Actor.h"

Actor::Actor(int in_ID)
{
    ActorID = in_ID;
};

int Actor::getID() {
    return ActorID;
};

void Actor::setID(int in_ID) {
    ActorID = in_ID;
}