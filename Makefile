main:
	g++ -c Individual.h Individual.cpp
	g++ -c Mutator.h Mutator.cpp
	g++ -c BitFlip.h BitFlip.cpp
	g++ -c BitFlipProb.h BitFlipProb.cpp
	g++ -c Rearrange.h Rearrange.cpp
	g++ -o main Individual.o Mutator.o BitFlip.o BitFlipProb.o Rearrange.o main.cpp
	make clean
	./main

clean:
	rm Individual.o Individual.h.gch
	rm Mutator.o Mutator.h.gch
	rm BitFlip.o BitFlip.h.gch
	rm BitFlipProb.o BitFlipProb.h.gch
	rm Rearrange.o Rearrange.h.gch