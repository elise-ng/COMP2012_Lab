PEN = pen.o
APPLE = apple.o
APPLE_PEN = $(APPLE) $(PEN) apple-pen.o

# You may find the following line useful in doing the lab later
# This will take the union (remove duplicate) of two variables $(PINEAPPLE_PEN) and
# $(APPLE_PEN).
PPAP = $(sort $(PINEAPPLE_PEN) $(APPLE_PEN))


all: apple-pen-main.exe

apple-pen-main.exe: apple-pen-main.cpp $(APPLE_PEN)
	g++ -o apple-pen-main.exe apple-pen-main.cpp $(APPLE_PEN)

apple-pen.o: apple-pen.cpp apple.h pen.h
	g++ -c apple-pen.cpp

pen.o: pen.cpp pen.h
	g++ -c pen.cpp

apple.o: apple.cpp apple.h
	g++ -c apple.cpp

clean:
	rm -f *.o *.exe
