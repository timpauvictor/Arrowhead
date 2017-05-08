#include "libtcod.hpp"
#include "Engine.h"

int main() {
	Logger l("log.txt");
	Engine game(&l);
	game.Init();

	return 0;
}

