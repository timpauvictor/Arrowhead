#include "Engine.h"
#include <memory>
#include <iostream>
#include <cstdio>

int Engine::xRes = 100;
int Engine::yRes = 50;
int actorCount = 0;

Engine::Engine()
{
	
}

Engine::~Engine()
{

}

int Engine::Init()
{
	TCODConsole::initRoot(xRes, yRes, "Arrowhead", false);
	while (!TCODConsole::isWindowClosed()) {
		TCOD_key_t key;
		TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, NULL);
		TCODConsole::root->clear();
		TCODConsole::root->putChar(40, 25, '@');
		TCODConsole::flush();
	}
	return 0;
}