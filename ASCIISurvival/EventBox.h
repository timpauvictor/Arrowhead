#pragma once
#include "Event.h"
#include <vector>
#include "Logger.h"

class EventBox
{
public:
	EventBox::EventBox(Logger* l);
	Event* EventBox::getOldest();
	Event* EventBox::getNewest();
	void EventBox::add(Event* ev);
private:
	std::vector<Event*> events;
	Logger* logger;
};
