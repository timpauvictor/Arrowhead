#include "Engine.h"
#include "libtcod.hpp"
#include "Handler.h"

int Engine::xRes = 100;
int Engine::yRes = 50;

Engine::Engine(Logger *l, Handler *h)
{
	logger = l;
	handler = h;
}

Engine::~Engine()
{
	
}

void Engine::Init()
{
	TCODConsole::initRoot(xRes, yRes, "ASCII Survival Game", false);
	player = makeActor(10, 10, '@', TCODColor::chartreuse);
	logger->log("Created player with ID: " + std::to_string(player->getID()), 2);
	while (!TCODConsole::isWindowClosed()) {
		handler->tick();
		TCODConsole::root->clear();
		render();
		TCODConsole::flush();
	}
}

Actor * Engine::makeActor(int i, int i1, char c, TCODColor col)
{
	Actor a(i, i1, c, col);
	_actors.push_back(a);
	logger->log("Created new actor with ID: " + std::to_string(a.getID()), 2);
	return &a;
}

void Engine::render()
{
	renderActors();
}

void Engine::renderActors()
{
	int x;
	int y;
	char c;
	TCODColor col;
	for (int i = 0; i < _actors.size(); i++)
	{
		x =   _actors.at(i).getPosX();
		y =   _actors.at(i).getPosY();
		c =	  _actors.at(i).getChar();
		col = _actors.at(i).getColor();

		TCODConsole::root->putChar(x, y, c);
		TCODConsole::root->setCharForeground(x, y, col);
	}
}


