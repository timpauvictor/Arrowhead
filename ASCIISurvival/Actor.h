#pragma once

class Actor
{
private:
	static int nextID;
	const int ID = nextID++;

public:
	Actor();
	~Actor();
	int getID();

};