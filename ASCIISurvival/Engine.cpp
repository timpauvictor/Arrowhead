#include "Engine.h"

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
	
	while (!TCODConsole::isWindowClosed()) {
		TCOD_key_t key;
		TCOD_event_t ev = TCODSystem::checkForEvent(TCOD_EVENT_ANY, &key, nullptr); //event type, key pointer, mouse pointer
		sendToHandler(ev, key);
		TCODConsole::root->clear();
		TCODConsole::root->putChar(40, 25, '@');
		TCODConsole::flush();
	}
}

void Engine::Log(std::string t)
{
	logger->log(t);
}



