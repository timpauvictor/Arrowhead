#include "./Headers/Engine.h"
#include <memory>
#include <iostream>
#include <cstdio>

int Engine::xRes = 100;
int Engine::yRes = 50;
int actorCount = 0;
int playerX = 40;
int playerY = 25;

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
		switch(key.vk) {
			case TCODK_UP: playerY--; break;
			case TCODK_DOWN: playerY++; break;
			case TCODK_LEFT: playerX--; break;
			case TCODK_RIGHT: playerX++; break;
			default: break;
		}
		TCODConsole::root->clear();
		TCODConsole::root->putChar(playerX, playerY, '@');
		TCODConsole::flush();
	}
	return 0;
}