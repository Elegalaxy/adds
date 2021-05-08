main:
	g++ -c Sort.h Sort.cpp
	g++ -c BubbleSort.h BubbleSort.cpp
	g++ -c QuickSort.h QuickSort.cpp
	g++ -c RecursiveBinarySearch.h RecursiveBinarySearch.cpp
	g++ -o main Sort.o BubbleSort.o QuickSort.o RecursiveBinarySearch.o main.cpp
	make clean

clean:
	rm Sort.o Sort.h.gch
	rm BubbleSort.o BubbleSort.h.gch
	rm QuickSort.o QuickSort.h.gch
	rm RecursiveBinarySearch.o RecursiveBinarySearch.h.gch