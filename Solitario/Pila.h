#pragma once
#include "Nodo.h"

ref class Pila
{
private:

public:
	Pila();
	Nodo^ First;
	bool IsEmpty();
	void llenar();
	void push(Carta^ nd);
	Carta^ pop();
	Nodo^ Peek();
	int ganador(int n);
	String^ recorrer();


};