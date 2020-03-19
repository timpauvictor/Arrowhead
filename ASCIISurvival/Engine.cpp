#include "./Headers/Engine.h"
#include <memory>
#include <iostream>
#include <cstdio>

int Engine::xRes = 100;
int Engine::yRes = 50;

int playerX = 40;
int playerY = 25;

int componentCounter = 0;

Engine::Engine()
{
	
}

Engine::~Engine()
{

}

void Engine::Update() {

}

int Engine::Init()
{
	TCODConsole::initRoot(xRes, yRes, "Arrowhead", false);
	em.addActor(Actor(componentCounter++));
	int playerID = em.getLatest()->getComponentID();
	tm.addComponent(TransformComponent(playerID, componentCounter++));

	
	mm.addComponent(MotionComponent(playerID, componentCounter++));



	while (!TCODConsole::isWindowClosed()) {
		TCOD_key_t key;
		TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, NULL);
		switch(key.vk) {
			case TCODK_UP: 
				//create motion transform event
				//movementSystem will handle it
				playerY--;
				
				break;
			case TCODK_DOWN: playerY++; break;
			case TCODK_LEFT: playerX--; break;
			case TCODK_RIGHT: playerX++; break;
			default: break;
		};
		TCODConsole::root->clear();
		TCODConsole::root->putChar(playerX, playerY, '@');
		TCODConsole::flush();
	}
	return 0;
}