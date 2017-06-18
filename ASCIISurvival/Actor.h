#pragma once
//#include "libtcod.hpp"
#include "Components.h"
#include <vector>
#include "EventBox.h"
class Actor
{
private:
	static int nextID;
	const int ID = nextID++;
	char c;
	int posX;
	int posY;
	std::vector<Component> _components;
	EventBox* eb;

public:
	Actor();
	~Actor();
	int getID();
	char getChar();
	void setChar(char newC);
	int getPosX();
	void setPosX(int x);
	int getPosY();
	void setPosY(int y);
	void update();
	bool addComponent(Component c);
	//int findComponent(compType c);
};
