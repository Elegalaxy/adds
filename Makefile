main:
	g++ -c Human.h Human.cpp
	g++ -c Computer.h Computer.cpp
	g++ -c Referee.h Referee.cpp
	g++ -c main.cpp
	g++ -Wall -o main Human.o Computer.o Referee.o main.o
	make clean

clean: 
	rm Human.o Computer.o Referee.o main.o Human.h.gch Computer.h.gch Referee.h.gch