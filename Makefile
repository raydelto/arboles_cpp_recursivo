all: Nodo.o Arbol.o main.o
	g++ Nodo.o Arbol.o main.o -o arboles

Nodo.o: Nodo.cpp
	g++ -c Nodo.cpp

Arbol.o: Arbol.cpp
	g++ -c Arbol.cpp

main.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o
	rm arboles

