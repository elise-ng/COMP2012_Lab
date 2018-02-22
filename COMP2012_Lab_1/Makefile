PEN = pen.o
APPLE = apple.o
APPLE_PEN = $(APPLE) $(PEN) apple-pen.o
PINEAPPLE = pineapple.o
PINEAPPLE_PEN = $(PINEAPPLE) $(PEN) pineapple-pen.o

# You may find the following line useful in doing the lab later
# This will take the union (remove duplicate) of two variables $(PINEAPPLE_PEN) and
# $(APPLE_PEN).
PPAP = $(sort $(PINEAPPLE_PEN) $(APPLE_PEN))


all: apple-pen-main.exe

apple-pen-main.exe: apple-pen-main.cpp $(APPLE_PEN)
	g++ -o apple-pen-main.exe apple-pen-main.cpp $(APPLE_PEN)

pineapple-pen-main.exe: pineapple-pen-main.cpp $(PINEAPPLE_PEN)
	g++ -o pineapple-pen-main.exe pineapple-pen-main.cpp $(PINEAPPLE_PEN)

apple-pen.o: apple-pen.cpp apple.h pen.h
	g++ -c apple-pen.cpp

pen.o: pen.cpp pen.h
	g++ -c pen.cpp

apple.o: apple.cpp apple.h
	g++ -c apple.cpp

pineapple.o: pineapple.cpp pineapple.h
	g++ -c pineapple.cpp

clean:
	rm -f *.o *.exe
