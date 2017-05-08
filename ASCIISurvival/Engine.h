#pragma once
#include "Logger.h"
//#include "libtcod.hpp"


class Engine
{
	public:
	static int xRes;
	static int yRes;
	Engine(Logger* l);
	~Engine();
	void Init();
	//void sendToHandler()
	void Log(std::string t);
	private:
		Logger* logger;
};
