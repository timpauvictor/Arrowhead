#include "Engine.h"
#include "libtcod.hpp"
#include "Actor.h"
#include "Logger.h"

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
	Actor player;
	Log("Actor created with ID: " + std::to_string(player.getID()));
	TCODConsole::initRoot(xRes, yRes, "ASCII Survival Game", false);
	Actor a;
	Log("Actor created with ID: " + std::to_string(a.getID()));
	while (!TCODConsole::isWindowClosed()) {
		TCOD_key_t key;
		TCOD_event_t ev = TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, nullptr); //event type, key pointer, mouse pointer
		//sendToHandler(TCOD_event_t);
		TCODConsole::root->clear();
		TCODConsole::root->putChar(40, 25, '@');
		TCODConsole::flush();
	}
}

void Engine::Log(std::string t)
{
	logger->log(t);
}


