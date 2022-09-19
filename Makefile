
OBJECTS=main.o box.o checkerboard.o cross.o lower.o upper.o

main: $(OBJECTS)
	g++ -o main $(OBJECTS)
main.o: main.cpp functions.h

box.o: box.cpp functions.h

checkerboard.o: checkerboard.cpp functions.h

cross.o: cross.cpp functions.h

lower.o: lower.cpp functions.h

upper.o: upper.cpp functions.h

clean:
	rm -f $(OBJECTS)