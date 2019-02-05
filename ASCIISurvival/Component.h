#pragma once
#include "componentTypes.h"

class Component {
private:
	int componentID;
	componentType cType;
public:
	virtual bool tick() = 0;
	void setComponentID(int);
	int getComponentID();
	componentType getComponentType();
	void setComponentType(componentType);
};