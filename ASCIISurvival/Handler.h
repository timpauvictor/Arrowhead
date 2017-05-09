#pragma once
#include "libtcod.hpp"
#include "Event.h"
#include "Logger.h"
#include "EventBox.h"


class Handler
{
public:
	Handler(Logger* l, EventBox* e);
	~Handler();
	void Handler::tick();
private:
	Logger* logger;
	EventBox* eb;
	void Translate(TCOD_event_t * ev, TCOD_key_t * key, TCOD_mouse_t * mouse);
	void Handler::Dispatch(Event* e);
};
