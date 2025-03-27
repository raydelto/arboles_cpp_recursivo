#include "Arbol.h"

using namespace std;

int main()
{
	Nodo presidente("Presidente");
	Nodo vp1("VP1");
	Nodo vp2("VP2");
	Nodo vp3("VP3");
	Nodo director("Director 1");
	Nodo gerente("Gerente 1");
	Nodo supervisor("Supervisor 1");
	Nodo operario("Operario 1");

	presidente.agregarHijo(&vp1);
	presidente.agregarHijo(&vp2);
	presidente.agregarHijo(&vp3);

	vp1.agregarHijo(&director);
	director.agregarHijo(&gerente);
	gerente.agregarHijo(&supervisor);
	supervisor.agregarHijo(&operario);
	Arbol arbol(&presidente);
	arbol.recorrer();
	return 0;
}

