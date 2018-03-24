#include "Event.h"

Event::Event(eventType newT)
{
	t = newT;
}

eventType Event::getType() { return t; }

char Event::getKey() { return keyDown; }

bool Event::addKey(char c) {
	if (t == keyPress)
	{
		keyDown = c;
		return true;
	}
	else
	{
		return false;
	}
}