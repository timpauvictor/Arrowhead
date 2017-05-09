#pragma once
#include "libtcod.hpp"
#include "Event.h"
#include "Logger.h"


class Handler
{
public:
	Handler(Logger* l);
	~Handler();
	void Handler::tick();
private:
	Logger* logger;
	void Translate(TCOD_event_t * e, TCOD_key_t * key, TCOD_mouse_t * mouse);
	void Handler::Dispatch(Event* e);
};
