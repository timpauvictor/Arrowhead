#include "EventBox.h"
#include "../include/libtcod.hpp"

enum ComponentType
{
	Stats,
	Keyboard,
	Location,
	Graphics
};


class Component
{
private:
	int cID;
	ComponentType cType;
public:
	virtual void update();
	virtual int getID();
	virtual ComponentType getType();
};

class geoBlock: public Component
{
	private:
		int location[2];
	public:
		int* getCoords();
};

class grfxBlock: public Component {
	private:
		char sprite;
};


