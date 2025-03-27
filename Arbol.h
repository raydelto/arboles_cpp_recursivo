#include "Nodo.h"

class Arbol
{
public:
	Arbol(Nodo* raiz);
	void recorrer();
	void recorrer(Nodo* nodo);
private:
	Nodo* _raiz;
};

