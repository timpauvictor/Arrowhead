#include "EventBox.h"

EventBox::EventBox(Logger* l)
{
	logger = l;
	l->log("EventBox initialized successfully");
}

EventBox::~EventBox()
{
	logger = nullptr;
}

int EventBox::getSize()
{
	return events.size();
}

Event EventBox::getOldest()
{
	Event toReturn = events.at(0);
	events.erase(events.begin(), events.begin()+1);
	events.shrink_to_fit();
	logger->log("Oldest event taken, " + std::to_string(events.size()) + " events left", 3);
	return toReturn;	
}

Event EventBox::getNewest()
{
	Event toReturn = events.at(events.size());
	events.erase(events.end(), events.end());
	logger->log("Newest event taken, " + std::to_string(events.size()) + " events left", 3);
	return toReturn;
}

void EventBox::add(Event ev)
{
	events.push_back(ev);
	logger->log("Event added to box, " + std::to_string(events.size()) + " events total", 3);
}
