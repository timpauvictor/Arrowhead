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
	logger->log("Created player with ID: " + std::to_string(player->getID()), 2);
	while (!TCODConsole::isWindowClosed()) {
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



void Engine::render()
{
}



void Engine::renderActors()
{

}


