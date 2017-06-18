ODIR = buildx64/
SDIR = ASCIISurvival
TCODARGS = -Iinclude -L. -ltcod -ltcodxx -Wl,-rpath=. -Wall -g
ARGS = -Wall -g


all: Event.o Logger.o EventBox.o Components.o Handler.o Actor.o GUI.o Engine.o Main.o
	g++ -o exec $(ODIR)Event.o $(ODIR)Logger.o $(ODIR)EventBox.o $(ODIR)Components.o \
		$(ODIR)Handler.o $(ODIR)Actor.o $(ODIR)GUI.o $(ODIR)Engine.o $(ODIR)Main.o \
		$(TCODARGS)
	./exec

Event.o: $(SDIR)/Event.cpp 
	g++ -c $<  -o $(ODIR)$@ $(ARGS)

Logger.o: $(SDIR)/Logger.cpp
	g++ -c $<  -o $(ODIR)$@ $(ARGS)

EventBox.o: $(SDIR)/EventBox.cpp Event.o Logger.o
	g++ -c $<  -o $(ODIR)$@ $(ARGS)

Components.o: $(SDIR)/Components.cpp EventBox.o
	g++ -c $<  -o $(ODIR)$@ $(ARGS)

Handler.o: $(SDIR)/Handler.cpp Event.o Logger.o EventBox.o
	g++ -c $<  -o $(ODIR)$@ $(TCODARGS)

Actor.o: $(SDIR)/Actor.cpp Components.o
	g++ -c $< -o $(ODIR)$@ $(ARGS)

GUI.o: $(SDIR)/GUI.cpp
	g++ -c $< -o $(ODIR)$@ $(TCODARGS)

Engine.o: $(SDIR)/Engine.cpp Actor.o Logger.o Handler.o EventBox.o GUI.o
	g++ -c $< -o $(ODIR)$@ $(TCODARGS)

Main.o: $(SDIR)/Main.cpp Engine.o
	g++ -c $< -o $(ODIR)$@ $(TCODARGS)
