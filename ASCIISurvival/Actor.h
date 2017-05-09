#pragma once
#include "libtcod.hpp"
#include "Component.h"
#include <vector>

class Actor
{
private:
	static int nextID;
	const int ID = nextID++;
	char c;
	int posX;
	int posY;
	TCODColor color;
	std::vector<Component> _components;


public:
	Actor(int x, int y, char c, TCODColor col);
	~Actor();
	int getID();
	char getChar();
	void setChar(char newC);
	int getPosX();
	void setPosX(int x);
	int getPosY();
	void setPosY(int y);
	TCODColor getColor();
	void setColor(TCODColor c);
};
