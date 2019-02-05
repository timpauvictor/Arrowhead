#pragma once
#include "Component.h"

class graphicsComponent : public Component {
private:
	char icon;
public:
	graphicsComponent(int, char);
	char getIcon();
	bool tick();
};
