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
	char strengthPoints, dexterityPoints, intelligencePoints, constitutionPoints;
	uint32_t healthPoints, manaPoints;
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
	statBlock();

	void setZero();
	void setSTR(char newStr);
	char getSTR();
	void setINT(char newInt);
	char getINT();
	void setDEX(char newDex);
	char getDEX();
	void setCON(char newCon);
	char getCON();
	void setHP(uint32_t newHP);
	uint32_t getHP();
	void setMP(uint32_t newMP);
	uint32_t getMP();
};

class geoBlock : public Component
{
private:
	int location[2];
public:
	int* getCoords();
};

class grfxBlock : public Component {
private:
	char sprite;
};
