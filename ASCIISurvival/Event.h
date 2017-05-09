#pragma once
#include "EventType.h"

enum eventType
{
	keyPress
};

class Event
{
private:
	eventType t;
public:
	Event();
	~Event();
};
