#include "Actor.h"
int Actor::nextID;


Actor::Actor() 
{
	//nothing!
}

Actor::~Actor()
{
	
}

int Actor::getID() { return ID; }
char Actor::getChar() { return c; }
void Actor::setChar(char newC) { c = newC; }
int Actor::getPosX() { return posX; }
void Actor::setPosX(int x) { posX = x; }
int Actor::getPosY() { return posY; }
void Actor::setPosY(int y) { posY = y; }

bool Actor::addComponent(Component c) {
	_components.push_back(c);
	return true;
}
