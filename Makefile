main:
	g++ -c MapGeneric.h MapGeneric.cpp
	g++ -c MapTriple.h MapTriple.cpp
	g++ -c MapSquare.h MapSquare.cpp
	g++ -c MapAbsoluteValue.h MapAbsoluteValue.cpp
	g++ -Wall -o main MapGeneric.o MapTriple.o MapSquare.o MapAbsoluteValue.o main.cpp
	make clean

clean:
	rm MapGeneric.o
	rm MapTriple.o
	rm MapSquare.o
	rm MapAbsoluteValue.o
	rm MapGeneric.h.gch
	rm MapTriple.h.gch
	rm MapSquare.h.gch
	rm MapAbsoluteValue.h.gch
