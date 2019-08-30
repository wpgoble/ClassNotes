frac: frac.o main.o
    g++ -o frac frac.o main.o

frac.o: frac.cpp frac.h
    g++ -c frac.cpp

main.o: main.cpp frac.h
    g++ -c main.cpp

clean:
    rm -f *.o frac
