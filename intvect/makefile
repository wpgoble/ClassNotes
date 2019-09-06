intvect: intvect.o main.o
	g++ intvect.o main.o -o intvect -std=c++11

intvect.o: intvect.cpp intvect.h
	g++ -c intvect.cpp -std=c++11

main.o: main.cpp intvect.h
	g++ -c main.cpp -std=c++11

clean: 
	rm -f *.o intvect