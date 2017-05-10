#include "Event.h"
int Event::nextID;

Event::Event(eventType newT, char c)
{
	t = newT;
	keyDown = c;
}

eventType Event::getType() { return t; }

char Event::getKey() { return keyDown; }

int Event::getID()
{
	return ID;
}
