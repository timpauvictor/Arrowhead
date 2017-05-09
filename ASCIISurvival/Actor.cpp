#include "Actor.h"
int Actor::nextID;


Actor::Actor(int x, int y, char newC, TCODColor col)
{
	posX = x;
	posY = y;
	c = newC;
	color = col;
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
TCODColor Actor::getColor() { return color; }
void Actor::setColor(TCODColor c) { color = c; }


