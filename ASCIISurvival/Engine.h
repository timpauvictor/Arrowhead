#pragma once
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
	Actor* makeActor(int i, int i1, char c, TCODColor col);
	void Log(std::string t);
	void renderActors();
	void render();
	void update();
	void doEvent(Event e);
	int checkPlayerMovement(int dx, int dy);
	void movePlayer(int dx, int dy);
	Logger* logger;
	Handler* handler;
	EventBox* eb;
	Actor* player;
	GUI gui;
	std::vector<Actor> _actors;
};
