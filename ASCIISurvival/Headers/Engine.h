#pragma once
#include "../include/libtcod.hpp"
#include "./Managers/Headers/EntityManager.h"
#include <vector>

class Engine
{
	public:
		static int xRes;
		static int yRes;
		Engine();
		~Engine();
		int Init();
		void Update();
	private:
		EntityManager em;
};
