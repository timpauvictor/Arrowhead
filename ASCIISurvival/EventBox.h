#pragma once
#include "Event.h"
#include <vector>
#include "Logger.h"

class EventBox
{
public:
	EventBox::EventBox(Logger* l);
	EventBox::~EventBox();
	Event EventBox::getOldest();
	Event EventBox::getNewest();
	void EventBox::add(Event ev);
	int EventBox::getSize();
private:
	std::vector<Event> events;
	Logger* logger;
};
