main:
	g++ -c Sort.h Sort.cpp
	g++ -o main Sort.o BubbleSort.o QuickSort.o RecursiveBinarySearch.o main.cpp
	make clean

clean:
	rm Sort.o Sort.h.gch
