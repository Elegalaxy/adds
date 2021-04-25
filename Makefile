main:
	g++ -c MapGeneric.h MapGeneric.cpp
	g++ -c FilterGeneric.h FilterGeneric.cpp
	g++ -c ReduceGeneric.h ReduceGeneric.cpp
	g++ -c MapTriple.h MapTriple.cpp
	g++ -c MapSquare.h MapSquare.cpp
	g++ -c MapAbsoluteValue.h MapAbsoluteValue.cpp
	g++ -c FilterOdd.h FilterOdd.cpp
	g++ -c FilterNonPositive.h FilterNonPositive.cpp
	g++ -c FilterForTwoDigitPositive.h FilterForTwoDigitPositive.cpp
	g++ -c ReduceMinimum.h ReduceMinimum.cpp
	g++ -c ReduceGCD.h ReduceGCD.cpp
	g++ -Wall -o main MapGeneric.o FilterGeneric.o ReduceGeneric.o MapTriple.o MapSquare.o MapAbsoluteValue.o FilterOdd.o FilterNonPositive.o FilterForTwoDigitPositive.o ReduceMinimum.o ReduceGCD.o main.cpp
	make clean

clean:
	rm MapGeneric.o
	rm FilterGeneric.o
	rm ReduceGeneric.o
	rm MapTriple.o
	rm MapSquare.o
	rm MapAbsoluteValue.o
	rm FilterOdd.o
	rm FilterNonPositive.o
	rm FilterForTwoDigitPositive.o
	rm ReduceMinimum.o
	rm MapGeneric.h.gch
	rm FilterGeneric.h.gch
	rm ReduceGeneric.h.gch
	rm MapTriple.h.gch
	rm MapSquare.h.gch
	rm MapAbsoluteValue.h.gch
	rm FilterOdd.h.gch
	rm FilterNonPositive.h.gch
	rm FilterForTwoDigitPositive.h.gch
	rm ReduceMinimum.h.gch
	rm ReduceGCD.h.gch