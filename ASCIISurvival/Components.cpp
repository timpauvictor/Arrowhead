#include "Components.h"

int Component::getID() { return cID; }
ComponentType Component::getType() { return cType; }
void Component::update()
{
	//do nothing
}

statBlock::statBlock() {
	// setZero();
}

void statBlock::setZero() {
	setSTR(0);
	setINT(0);
	setDEX(0);
	setCON(0);
	setHP(0);
	setMP(0);
}

void statBlock::update() {
	//check for events here
}



void statBlock::setSTR(char newStr) {
	stats.strengthPoints = newStr;
}

void statBlock::setINT(char newInt) {
	stats.intelligencePoints = newInt;
}

void statBlock::setDEX(char newDex) {
	stats.dexterityPoints = newDex;
}

void statBlock::setCON(char newCon) {
	stats.constitutionPoints = newCon;
}

void statBlock::setHP(uint32_t newHP) {
	stats.healthPoints = newHP;
}

void statBlock::setMP(uint32_t newMP) {
	stats.manaPoints = newMP;
}

char statBlock::getSTR() {
	return stats.strengthPoints;
}

char statBlock::getINT() {
	return stats.intelligencePoints;
}

char statBlock::getDEX() {
	return stats.dexterityPoints;
}

char statBlock::getCON() {
	return stats.constitutionPoints;
}

uint32_t statBlock::getHP() {
	return stats.healthPoints;
}

uint32_t statBlock::getMP() {
	return stats.manaPoints;
}