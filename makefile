all: main

main: main.o classData.o classIOFile.o
	g++ -o main main.o classData.o classIOFile.o

main.o: main.cpp classData.hpp classIOFile.hpp
	g++ -o main.o main.cpp -c -W -Wall -ansi -pedantic

classData.o: classData.cpp classData.hpp
	g++ -o classData.o classData.cpp -c -W -Wall -ansi -pedantic

classIOFile.o: classIOFile.cpp classIOFile.hpp
	g++ -o classIOFile.o classIOFile.cpp -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *.exe main out.bin