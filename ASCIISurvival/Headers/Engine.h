#pragma once
#include "../include/libtcod.hpp"

#include "./Managers/Headers/EntityManager.h"
#include "./Managers/Headers/TransformManager.h"
#include "./Managers/Headers/MotionManager.h"

#include "./Handlers/Headers/Handler.h"

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
		TransformManager tm;
		MotionManager mm;

		Handler MotionTransformHandler; //keeps track of all IDs that have motion and transform
										//this is needed by the motionSystem (as that handles all interactions between motion and transform elements)

};
