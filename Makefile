
OBJECTS=main.o box.o

main: main.o box.o
	g++ -o main $(OBJECTS)
main.o: main.cpp functions.h

box.o: box.cpp functions.h

clean:
	rm -f $(OBJECTS)