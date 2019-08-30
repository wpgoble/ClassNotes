frac: frac.o main.o
	g++ frac.o main.o -o frac
frac.o: frac.cpp frac.h
	g++ -c frac.cpp
main.o: main.cpp frac.h
	g++ -c main.cpp
clean:
	rm -f *.o flex