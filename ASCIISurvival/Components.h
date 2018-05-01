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

enum statTypes
{
	actorStrength, actorDexterity, actorIntelligence, actorConstitution
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

class mvmtBlock : public Component {
	private:
		int location[2];
	public:
		mvmtBlock();
		virtual void update();
		virtual int getID();
		int* getLoc();
		bool setLoc(int* newLoc);
		bool transform(int dx, int dy);
};

class statBlock : public Component
{
private:
	statStruct stats;
public:
	statBlock();
	virtual void update();
	void setZero();
	void setSTR(char newStr);
	char getSTR();
	void setINT(char newInt);
	char getINT();
	void setDEX(char newDex);
	char getDEX();
	void setCON(char newCon);
	char getCON();
	void setAll(char newStr, char newInt, char newDex, char newCon);
	void setHP(uint32_t newHP);
	uint32_t getHP();
	void setMP(uint32_t newMP);
	uint32_t getMP();
};

// class geoBlock : public Component
// {
// private:
// 	int location[2];
// public:
// 	int* getCoords();
// 	bool setCoords(int* newLoc);
// 	bool transform(int dx, int dy);
// };

class grfxBlock : public Component {
private:
	char sprite;
};
