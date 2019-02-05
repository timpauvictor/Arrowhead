#include "Engine.h"
#include <memory>
#include <iostream>
#include <cstdio>

int Engine::xRes = 100;
int Engine::yRes = 50;
int actorCount = 0;

Engine::Engine()
{
	using namespace std;
	freopen("log.txt", "w", stdout);

	cout << "Engine has started" << endl;
	
}

Engine::~Engine()
{

}

void Engine::Init()
{
	TCODConsole::initRoot(xRes, yRes, "ASCII Survival Game", false);
	while (!TCODConsole::isWindowClosed()) {
		TCODConsole::root->clear();
		TCODConsole::flush();
	}
}