all : main

main: main.o  Image.o
	g++ -g main.o Image.o -o main -std=c++11
	
main.o: main.cpp  Image.h
	g++ -g -c main.cpp -o main.o -std=c++11
	
Image.o: Image.cpp Image.h
	g++ -g -c Image.cpp -Wall -o Image.o --std=c++11 

clean : 
	rm -f *.o
