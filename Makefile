all: сalculator
Calculator: main.o calculator.o
	g++ main.o calculator.o -o Calculator

main.o: main.cpp
	g++ -c main.cpp

calculator.o: calculator.o.cpp
	g++ -c calculator.o.cpp

clean: rm -rf *.o calculator

