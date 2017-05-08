#pragma once
#include "Engine.h"
#include "libtcod.hpp"
#include "Actor.h"
#include "Logger.h"
#include "Components.h"
#include <vector>


class Engine
{
	public:
	static int xRes;
	static int yRes;
	Engine(Logger* l);
	~Engine();
	void Init();
	int sendToHandler(TCOD_event_t event, TCOD_key_t key);
	void Log(std::string t);
	private:
		Logger* logger;
		std::vector<Components> components;
};
