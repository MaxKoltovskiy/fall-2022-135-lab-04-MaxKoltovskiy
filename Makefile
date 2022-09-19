
OBJECTS=main.o box.o checkerboard.o

main: $(OBJECTS)
	g++ -o main $(OBJECTS)
main.o: main.cpp functions.h

box.o: box.cpp functions.h

checkerboard.o: checkerboard.cpp functions.h

clean:
	rm -f $(OBJECTS)