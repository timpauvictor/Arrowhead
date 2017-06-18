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
	int receiverID;
	int senderID;
public:
	Event(eventType newT);
	eventType getType();

	char getKey();
	bool addKey(char c);

	int getRecieving();
	int getSender();

	
};
