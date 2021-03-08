main:
	g++ -c Hand.h Hand.cpp
	g++ -c Human.h Human.cpp
	g++ -c Computer.h Computer.cpp
	g++ -c Referee.h Referee.cpp
	g++ -c main.cpp
	g++ -Wall -o main Hand.o Human.o Computer.o Referee.o main.o
	make clean

clean: 
	rm Hand.o Human.o Computer.o Referee.o main.o Hand.h.gch Human.h.gch Computer.h.gch Referee.h.gch