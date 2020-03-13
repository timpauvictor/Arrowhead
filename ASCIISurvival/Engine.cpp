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

void Engine::Init()
{
	TCODConsole::initRoot(xRes, yRes, "ASCII Survival Game", false, TCOD_RENDERER_SDL2);
	TCODSystem::setFps(25);
	TCODMouse::showCursor(true);
	
	while (!TCODConsole::isWindowClosed()) {
		TCODConsole::root->clear();
		TCODConsole::flush();
	}
}