#include "Actor.h"

Actor::Actor(int in_actorCount) 
{
	actorID = in_actorCount + 1;
	parentID = -1;
}

Actor::Actor(int in_actorCount, int in_parentID) {
	actorID = in_actorCount + 1;
	parentID = in_parentID;
}

int Actor::getActorID() {
	return actorID;
}

int Actor::getParentID() {
	return parentID;
}

bool Actor::addComponent(Component in_comp) {

}