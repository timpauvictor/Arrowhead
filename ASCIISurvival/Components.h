#include "EventBox.h"

enum ComponentType
{
	Stats,
	Keyboard,
	Location,
	GraphicsComponent
};


class Component
{
private:
	int cID;
	ComponentType cType;
public:
	virtual void update();
	int getID();
	ComponentType getType();
};

//class StatsComponent: public Component //storing stats for everything
//{
//private:
//	int strength;
//	int dexterity;
//	int intelligence;
//public:
//	void update() override;
//};

//class KeyBoardComponent: public Component
//{
//	public:
//		void update() override;
//};

//class LocationComponponent: public Component 
//{

//}

//class GraphicsComponent: public Component
//{
	
//}
