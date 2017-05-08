#include "Engine.h"
#include "libtcod.hpp"

int Engine::xRes = 100;
int Engine::yRes = 50;

Engine::Engine(Logger *l)
{
	logger = l;
}

Engine::~Engine()
{
}

void Engine::Init()
{
	TCODConsole::initRoot(xRes, yRes, "ASCII Survival Game", false);
	while (!TCODConsole::isWindowClosed()) {
		TCOD_key_t key;
		TCOD_event_t ev = TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, nullptr); //event type, key pointer, mouse pointer
		TCODConsole::root->clear();
		TCODConsole::root->putChar(40, 25, '@');
		TCODConsole::flush();
	}
}

void Engine::Log(std::string t)
{
	logger->log(t);
}



