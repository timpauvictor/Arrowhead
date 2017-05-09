#pragma once

enum eventType
{
	keyPress
};

class Event
{
private:
	eventType t;
	char keyDown;
	static int nextID;
	const int ID = nextID++;
public:
	Event(eventType newT, char c);
	eventType Event::getType();
	char Event::getKeyDown();
	int Event::getID();
};
