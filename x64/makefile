ODIR = ./DebugLinux/
SDIR = ../ASCIISurvival
TCODARGS = -Iinclude -L. -ltcod -ltcodxx -Wl,-rpath=. -Wall -g -std=c++11
ARGS = -Wall -g -std=c++11
COM = g++

REQUIREDFILES = $(ODIR)Event.o $(ODIR)Logger.o $(ODIR)EventBox.o $(ODIR)Components.o $(ODIR)Handler.o $(ODIR)Actor.o $(ODIR)GUI.o $(ODIR)Engine.o

game: pre $(REQUIREDFILES) $(ODIR)Main.o
	
	#./exec

test: pre $(REQUIREDFILES) $(ODIR)Test.o
	$(COM) -o test $(REQUIREDFILES) $(ODIR)Test.o $(TCODARGS)

pre:
	mkdir -p ./DebugLinux

clean:
	rm *.o
	rm game

$(ODIR)Event.o: $(SDIR)/Event.cpp $(SDIR)/Event.h
	$(COM) -c $<  -o $@ $(ARGS)

$(ODIR)Logger.o: $(SDIR)/Logger.cpp $(SDIR)/Logger.h
	$(COM) -c $<  -o $@ $(ARGS)

$(ODIR)EventBox.o: $(SDIR)/EventBox.cpp $(SDIR)/EventBox.h $(ODIR)Event.o $(ODIR)Logger.o
	$(COM) -c $<  -o $@ $(ARGS)

$(ODIR)Components.o: $(SDIR)/Components.cpp $(SDIR)/Components.h $(ODIR)EventBox.o
	$(COM) -c $<  -o $@ $(ARGS)

$(ODIR)Handler.o: $(SDIR)/Handler.cpp $(SDIR)/Handler.h $(ODIR)Event.o $(ODIR)Logger.o $(ODIR)EventBox.o
	$(COM) -c $<  -o $@ $(TCODARGS)

$(ODIR)Actor.o: $(SDIR)/Actor.cpp $(SDIR)/Actor.h $(ODIR)Components.o
	$(COM) -c $< -o $@ $(ARGS)

$(ODIR)GUI.o: $(SDIR)/GUI.cpp $(SDIR)/GUI.h
	$(COM) -c $< -o $@ $(TCODARGS)

$(ODIR)Engine.o: $(SDIR)/Engine.cpp $(SDIR)/Engine.h $(ODIR)Actor.o $(ODIR)Logger.o $(ODIR)Handler.o $(ODIR)EventBox.o $(ODIR)GUI.o
	$(COM) -c $< -o $@ $(TCODARGS)

$(ODIR)Main.o: $(SDIR)/Main.cpp $(ODIR)Engine.o
	$(COM) -c $< -o $@ $(TCODARGS)

$(ODIR)Test.o: $(SDIR)/Test.cpp $(ODIR)Engine.o 
	$(COM) -c $< -o $@ $(ARGS)
