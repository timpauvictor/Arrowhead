#include "GUI.h"

TCODConsole *guiConsole = new TCODConsole(150, 8);

GUI::GUI()
{
		
}

void GUI::render()
{
	guiConsole->setDefaultBackground(TCODColor::copper);
	guiConsole->clear();
	guiConsole->print(0, 0, "GUI Initialized");
	TCODConsole::blit(guiConsole, 0, 0, 150, 8, TCODConsole::root, 0, 42);
	TCODConsole::flush();
}



void GUI::update()
{
	
}

