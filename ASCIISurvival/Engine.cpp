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
	//MotionSystem.tick()
		//what happens here?
			//iterate through all handles owned by MotionTransformHandler
			//Look for all non-zero motion vectors
			//if non-zero motion vector found: add the vector to the matching TransformManager 
			//share updated location with graphicsManager (through the GraphicsTransformHandler)

	//GraphicsSystem.tick()
		//iterate through all 
}

int Engine::Init()
{
	TCODConsole::initRoot(xRes, yRes, "Arrowhead", false);
	em.addActor(Actor(componentCounter++));
	int playerID = em.getLatest()->getComponentID();
	
	TransformComponent newTM(playerID, componentCounter++, Coordinate(0, 0));


	tm.addComponent(TransformComponent(playerID, componentCounter++, Coordinate(0, 0)));
	mm.addComponent(MotionComponent(playerID, componentCounter++, Coordinate(1, 1)));

	HandlerComponent newHandle = {
		playerID,
		mm.getLatest()->getComponentID,
		tm.getLatest()->getComponentID
	};
	MotionTransformHandler.add(newHandle);

	

	while (!TCODConsole::isWindowClosed()) {
		Update();

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