#pragma once

enum eventType
{
	keyPress,
	statUpdate
};


class Event
{
private:
	eventType t;
	char keyDown;
	static int nextID;
	int ID = nextID++;
public:
	Event(eventType newT, char c);
	eventType getType();
	char getKey();
	int getID();
};
