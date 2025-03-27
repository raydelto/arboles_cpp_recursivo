#include "Nodo.h"


Nodo::Nodo(std::string nombre): _nombre(nombre), _siguiente(nullptr), _primerHijo(nullptr), _ultimoHijo(nullptr), _profundidad(0)
{
}

std::string Nodo::getNombre()
{
	return _nombre;
}

void Nodo::agregarHijo(Nodo* hijo)
{
	if(hijo == nullptr)
	{
		return;
	}
	hijo->_profundidad = _profundidad + 1;
	if(_primerHijo == nullptr) // Este es el primer hijo
	{
		_primerHijo = hijo;
		_ultimoHijo = hijo;
	}
	else // Si no es el primer hijo
	{
		_ultimoHijo->_siguiente = hijo;
		_ultimoHijo = hijo;
	}
}

Nodo* Nodo::getPrimerHijo()
{
	return _primerHijo;
}


Nodo* Nodo::getSiguiente()
{
	return _siguiente;
}


int Nodo::getProfundidad()
{
	return _profundidad;
}

