all: main

main: main.o classData.o classIOFile.o
	g++ -o main main.o classData.o classIOFile.o

main.o: main.cpp classData.hpp classIOFile.hpp
	g++ -std=c++11 -c -W -Wall -ansi -pedantic -o main.o main.cpp 

classData.o: classData.cpp classData.hpp
	g++ -std=c++11 -c -W -Wall -ansi -pedantic -o classData.o classData.cpp 

classIOFile.o: classIOFile.cpp classIOFile.hpp
	g++ -std=c++11 -c -W -Wall -ansi -pedantic -o classIOFile.o classIOFile.cpp 

clean:
	rm -rf *.o *.exe main out.bin