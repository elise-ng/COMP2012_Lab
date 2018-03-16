all: parta.exe

parta.exe: main_a.cpp Employee.o Consultant.o
	g++ -std=c++11 -o parta.exe main_a.cpp Employee.o Consultant.o

Employee.o: Employee.cpp Employee.h
	g++ -std=c++11 -c Employee.cpp

Consultant.o: Consultant.cpp Consultant.h
	g++ -std=c++11 -c Consultant.cpp
	
clean:
	rm -f *.o *.exe
