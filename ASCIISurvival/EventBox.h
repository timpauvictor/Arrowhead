#pragma once
#include "Event.h"
#include <vector>
#include "Logger.h"

class EventBox
{
public:
	EventBox(Logger* l);
	~EventBox();
	Event getOldest();
	Event getNewest();
	void add(Event ev);
	int getSize();
private:
	std::vector<Event> events;
	Logger* logger;
};
