#pragma once
#include "Actor.h"
#include "Logger.h"
#include <vector>

class Engine
{
	public:
	static int xRes;
	static int yRes;
	Engine(Logger* l);
	~Engine();
	void Init();
	void Log(std::string t);
	private:
		Logger* logger;
		std::vector<Actor> _actors;
};
