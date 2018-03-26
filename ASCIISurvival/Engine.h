#pragma once
#include "../include/libtcod.hpp"
#include "Actor.h"
#include "Logger.h"
#include "Handler.h"
#include "EventBox.h"
#include <vector>
#include "GUI.h"

class Engine
{
public:
	static int xRes;
	static int yRes;
	Engine(Logger* l, Handler* h, EventBox* e);
	~Engine();
	void Init();
private:
	void update();
	void render();
	bool renderActors();
	Component findComponentbyID(int findID);
	Actor initPlayer();
	Logger* logger;
	Handler* handler;
	EventBox* eb;
	Actor* player;
	GUI gui;
	std::vector<Actor> _actors;
};
