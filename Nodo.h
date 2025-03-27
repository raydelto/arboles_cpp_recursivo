#include <string>

class Nodo
{
public:

	Nodo(std::string nombre);
	std::string getNombre();
	void agregarHijo(Nodo* hijo);
	Nodo* getPrimerHijo();
	Nodo* getSiguiente();
	int getProfundidad();
private:
	std::string _nombre;
	Nodo* _siguiente;
	Nodo* _primerHijo;
	Nodo* _ultimoHijo;
	int _profundidad;
};

