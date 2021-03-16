main:
	g++ -c Player.h Player.cpp
	g++ -c Human.h Human.cpp
	g++ -c Referee.h Referee.cpp
	g++ -c Tournament.h Tournament.cpp
	g++ -c Single.h Single.cpp
	g++ -c Order.h Order.cpp
	g++ -c RandomComputer.h RandomComputer.cpp
	g++ -c Avalanche.h Avalanche.cpp
	g++ -c Bureaucrat.h Bureaucrat.cpp
	g++ -c Toolbox.h Toolbox.cpp
	g++ -c Crescendo.h Crescendo.cpp
	g++ -c PaperDoll.h PaperDoll.cpp
	g++ -c FistfullODollars.h FistfullODollars.cpp
	g++ -c main.cpp
	g++ -Wall -o main Player.o Human.o Referee.o Tournament.o Single.o Order.o RandomComputer.o Avalanche.o Bureaucrat.o Toolbox.o Crescendo.o PaperDoll.o FistfullODollars.o main.o
	make clean

clean: 
	rm Player.o Human.o Referee.o Tournament.o Single.o Order.o RandomComputer.o Avalanche.o Bureaucrat.o Toolbox.o Crescendo.o PaperDoll.o FistfullODollars.o main.o
	rm Player.h.gch Human.h.gch Referee.h.gch Tournament.h.gch Single.h.gch Order.h.gch RandomComputer.h.gch Avalanche.h.gch Bureaucrat.h.gch Toolbox.h.gch Crescendo.h.gch PaperDoll.h.gch FistfullODollars.h.gch
