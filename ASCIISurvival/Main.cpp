#include "libtcod.hpp"
#include "Engine.h"
#include "Handler.h"

int main() {
	Logger l("log.txt");
	Handler h(&l);
	Engine game(&l, &h);
	game.Init();

	return 0;
}

