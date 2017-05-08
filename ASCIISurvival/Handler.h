#pragma once
#include "libtcod.hpp";


class Handler
{
public:
	Handler();
	~Handler();
	void Handler::Handle(Event* e);
};