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
	//Systems should be the only place where any data modification actually occurs

	//eventsSystem.tick()

	//MotionSystem.tick()
		//what happens here?
			//iterate through all motion events
			//add the vector to the current transform coordinates
				//create a graphics system event to change the coordinates of the sprite
			//if motion vector is zero you can destroy the event
			//share updated location with graphicsManager (through the GraphicsTransformHandler)

	//GraphicsSystem.tick() (this should always be last)
		//iterate through all graphics events (if any)
		//draw any sprite changes
		//swap buffers
}

int Engine::Init()
{
	TCODConsole::initRoot(xRes, yRes, "Arrowhead", false);
	em.addActor(Actor(componentCounter++));
	int playerID = em.getLatest()->getComponentID();
	
	tm.addComponent(TransformComponent(playerID, componentCounter++, Coordinate(0, 0)));
	mm.addComponent(MotionComponent(playerID, componentCounter++, Coordinate(1, 1)));

	HandlerComponent newHandle = {
		playerID,
		mm.getLatest()->getComponentID(),
		tm.getLatest()->getComponentID()
	};
	MotionTransformHandler.add(newHandle);

	while (!TCODConsole::isWindowClosed()) {
		Update();

		TCOD_key_t key;
		TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, NULL);
		switch(key.vk) {
			case TCODK_UP: 
				//create motion event
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