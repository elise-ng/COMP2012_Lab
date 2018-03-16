all: parta.exe partb.exe partc.exe

parta.exe: main_a.cpp Employee.o Consultant.o
	g++ -std=c++11 -o parta.exe main_a.cpp Employee.o Consultant.o

partb.exe: main_b.cpp Employee.o Consultant.o EducationalConsultant.o
	g++ -std=c++11 -o partb.exe main_b.cpp Employee.o Consultant.o EducationalConsultant.o

partc.exe: main_c.cpp Employee.o Consultant.o EducationalConsultant.o
	g++ -std=c++11 -o partc.exe main_c.cpp Employee.o Consultant.o EducationalConsultant.o


Employee.o: Employee.cpp Employee.h
	g++ -std=c++11 -c Employee.cpp

Consultant.o: Consultant.cpp Consultant.h
	g++ -std=c++11 -c Consultant.cpp

EducationalConsultant.o: EducationalConsultant.cpp EducationalConsultant.h
	g++ -std=c++11 -c EducationalConsultant.cpp

clean:
	rm -f *.o *.exe
