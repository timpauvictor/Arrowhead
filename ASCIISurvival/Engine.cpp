#include "Engine.h"
#include "libtcod.hpp"
#include "Handler.h"
#include "Actor.h"

int Engine::xRes = 100;
int Engine::yRes = 50;


Engine::Engine(Logger *l, Handler *h, EventBox *e)
{
	logger = l;
	handler = h;
	eb = e;
}

Engine::~Engine()
{
	logger = nullptr;
	handler = nullptr;
	eb = nullptr;
}

void Engine::Init()
{
	TCODConsole::initRoot(xRes, yRes, "ASCII Survival Game", false);
	player = makeActor(10, 10, '@', TCODColor::white);
	logger->log("Created player with ID: " + std::to_string(player->getID()), 2);
	while (!TCODConsole::isWindowClosed()) {
		player = &_actors.at(0);
		handler->tick();
		TCODConsole::root->clear();
		update();
		render();
		gui.render();
		TCODConsole::flush();
	}
}

void Engine::update()
{
	//TODO
}

void Engine::movePlayer(int dx, int dy)
{
	player->setPosX(player->getPosX() + dx);
	player->setPosY(player->getPosY() + dy);
}

void Engine::render()
{
	renderActors();
}

Actor * Engine::makeActor(int i, int i1, char c, TCODColor col)
{
	Actor a(i, i1, c, col);
	_actors.push_back(a);
	logger->log("Created new actor with ID: " + std::to_string(a.getID()), 2);
	return &(_actors.at(0));
}

void Engine::renderActors()
{
	int x;
	int y;
	char c;
	TCODColor col;
	for (size_t i = 0; i < _actors.size(); i++)
	{
		x =   _actors.at(i).getPosX();
		y =   _actors.at(i).getPosY();
		c =	  _actors.at(i).getChar();
		col = _actors.at(i).getColor();

		TCODConsole::root->putChar(x, y, c);
		TCODConsole::root->setCharForeground(x, y, col);
	}
}


