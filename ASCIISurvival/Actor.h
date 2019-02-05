#pragma once
#include "Component.h"
#include <vector>

class Actor
{
private:
	int actorID = 0;
	int parentID = 0;
	std::vector<Component> myComponents;
public:
	Actor(int);
	Actor(int, int);
	int getActorID();
	int getParentID();
	bool addComponent(Component);
	bool hasComponent();
};