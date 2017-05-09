#pragma once
#include "Actor.h"
#include "Logger.h"
#include "Handler.h"
#include <vector>

class Engine
{
public:
	static int xRes;
	static int yRes;
	Engine(Logger* l, Handler* h);
	~Engine();
	
	void Init();
private:
	Actor* makeActor(int i, int i1, char c, TCODColor col);
	void Log(std::string t);
	void renderActors();
	void render();
	Logger* logger;
	Handler* handler;
	Actor* player;
	std::vector<Actor> _actors;
};
