all: main

main: main.o
	g++ -o main main.o classData.o

main.o: main.cpp classData.hpp
	g++ -o main.o main.cpp -c -W -Wall -ansi -pedantic

classData.o: classData.cpp classData.hpp
	g++ -o classData.o classData.cpp -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *.exe main