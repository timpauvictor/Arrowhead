#include "libtcod.hpp"
#include "Engine.h"
//#include "Handler.h"

int main() {
	Logger l("log.txt");
	//Handler h;
	Engine game(&l);
	game.Init();

	return 0;
}

