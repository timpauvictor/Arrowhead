ODIR = ./
SDIR = ../ASCIISurvival
TCODARGS = -Iinclude -L. -ltcod -ltcodxx -Wl,-rpath=. -Wall -g -std=c++11
ARGS = -Wall -g -std=c++11


game: Event.o Logger.o EventBox.o Components.o Handler.o Actor.o GUI.o Engine.o Main.o
	g++ -o game $(ODIR)Event.o $(ODIR)Logger.o $(ODIR)EventBox.o $(ODIR)Components.o \
		$(ODIR)Handler.o $(ODIR)Actor.o $(ODIR)GUI.o $(ODIR)Engine.o $(ODIR)Main.o \
		$(TCODARGS)
	#./exec

clean:
	rm *.o
	rm game

Event.o: $(SDIR)/Event.cpp $(SDIR)/Event.h
	g++ -c $<  -o $(ODIR)$@ $(ARGS)

Logger.o: $(SDIR)/Logger.cpp $(SDIR)/Logger.h
	g++ -c $<  -o $(ODIR)$@ $(ARGS)

EventBox.o: $(SDIR)/EventBox.cpp $(SDIR)/EventBox.h Event.o Logger.o
	g++ -c $<  -o $(ODIR)$@ $(ARGS)

Components.o: $(SDIR)/Components.cpp $(SDIR)/Components.h EventBox.o
	g++ -c $<  -o $(ODIR)$@ $(ARGS)

Handler.o: $(SDIR)/Handler.cpp $(SDIR)/Handler.h Event.o Logger.o EventBox.o
	g++ -c $<  -o $(ODIR)$@ $(TCODARGS)

Actor.o: $(SDIR)/Actor.cpp $(SDIR)/Actor.h Components.o
	g++ -c $< -o $(ODIR)$@ $(ARGS)

GUI.o: $(SDIR)/GUI.cpp $(SDIR)/GUI.h
	g++ -c $< -o $(ODIR)$@ $(TCODARGS)

Engine.o: $(SDIR)/Engine.cpp $(SDIR)/Engine.h Actor.o Logger.o Handler.o EventBox.o GUI.o
	g++ -c $< -o $(ODIR)$@ $(TCODARGS)

Main.o: $(SDIR)/Main.cpp Engine.o
	g++ -c $< -o $(ODIR)$@ $(TCODARGS)
