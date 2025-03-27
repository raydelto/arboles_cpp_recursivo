#include "Arbol.h"
#include <iostream>

Arbol::Arbol(Nodo* raiz): _raiz(raiz)
{
}

void Arbol::recorrer()
{
	recorrer(_raiz);
}

void Arbol::recorrer(Nodo* nodo)
{
	if(nodo == nullptr)
	{
		return;
	}

	for(int i = 0; i < nodo->getProfundidad(); i++)
	{
		std::cout << "\t";
	}

	std::cout << nodo->getNombre() << std::endl;

	Nodo* i = nodo->getPrimerHijo();

	while(i != nullptr)
	{
		recorrer(i);
		i = i->getSiguiente();
	}
}

