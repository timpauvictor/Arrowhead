#pragma once
#include "libtcod.hpp";


class Event;
class Handler
{
public:
	Handler();
	~Handler();
	void Handler::Translate(TCOD_event_t e);
	void Handler::Dispatch(Event* e);
};
