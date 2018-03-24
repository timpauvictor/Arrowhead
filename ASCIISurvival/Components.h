#include "EventBox.h"
#include "../include/libtcod.hpp"

enum ComponentType
{
	Stats,
	Keyboard,
	Location,
	Graphics
};

struct statStruct
{
	int healthPoints, manaPoints,
		strengthPoints, dexterityPoints, intelligencePoints, constitutionPoints;
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

class statBlock : public Component
{
private:
	statStruct stats;
public:
	void setSTR();
	void getSTR();
	void setINT();
	void getINT();
	void setDEX();
	void getDEX();
	void setCON();
	void getCON();
	void setHP();
	void getHP();
	void setMP();
	void getMP();
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


