#include "Engine.h"
#include <memory>

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
	std::shared_ptr<Actor> player(&initPlayer());
	logger->log("Created player with ID: " + std::to_string(player->getID()), 2);
	while (!TCODConsole::isWindowClosed()) {
		handler->tick();
		TCODConsole::root->clear();
		Engine::update();
		Engine::render();
		gui.render();
		TCODConsole::flush();
	}
}

void Engine::update()
{
}

Actor Engine::initPlayer()
{
	Actor player;
	statBlock stats;
	stats.setAll(10, 10, 10, 10);
	player.addComponent(stats);
	return player;
}

void Engine::render()
{
	for (size_t i = 0; i < _actors.size(); i++)
	{
		//		if (Component c = _actors.at(i).hasComponent(Graphics));
	}
}

bool Engine::renderActors()
{
	return true;
}