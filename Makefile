main:
	g++ -c Node.h Node.cpp
	g++ -c LinkedList.h LinkedList.cpp
	g++ -o main Node.o LinkedList.o main.cpp
	make clean

clean:
	rm Node.o Node.h.gch
	rm LinkedList.o LinkedList.h.gch
