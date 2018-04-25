#pragma once
#include "Event.h"
#include <vector>
#include "Logger.h"

class EventBox
{
public:
	EventBox(Logger* l);
	~EventBox();
	Event getOldest(int id);
	Event getNewest(int id);
	void add(Event ev);
	size_t getSize();
private:
	std::vector<Event> events;
	Logger* logger;
};
