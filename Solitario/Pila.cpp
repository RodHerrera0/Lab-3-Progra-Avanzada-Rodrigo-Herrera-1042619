#include "stdafx.h"
#include "Pila.h"
#include "pch.h"


Pila::Pila()
{
}
bool Pila::IsEmpty()
{
	return First == nullptr;
}

void Pila::llenar()
{
	int val1 = 1;
	int val2 = 1;
	for (int i = 0; i < 52; i++)
	{
		Nodo^ nnodo = gcnew Nodo;
		if (i < 26)
		{
			nnodo->crt.num = val1;
			nnodo->crt.color = "N";
			val1++;
		}
		else
		{
			nnodo->crt.num = val2;
			nnodo->crt.color = "R";
			val2++;
		}
		nnodo->next = First;
		First = nnodo;
	}

}


void Pila::push(Carta^ nd)
{
	Nodo^ nnodo = gcnew Nodo;
	nnodo->crt.num = nd->num;
	nnodo->crt.color = nd->color;
	nnodo->next = First;
	First = nnodo;
}

Carta^ Pila::pop()
{
	Carta^ ncarta = gcnew Carta;
	if (IsEmpty())
		return ncarta;
	else
	{
		ncarta->num = First->crt.num;
		ncarta->color = First->crt.color;
		Nodo^ Remove = First;
		First = First->next;
		delete Remove;
		return ncarta;
	}

}

Nodo^ Pila::Peek()
{
	return First;
}

int Pila::ganador(int n)
{
	int cont = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		cont++;
	}
	return cont;
}

String^ Pila::recorrer()
{
	String^ num;
	String^ carta;
	if (IsEmpty())
		return "";
	else
	{
		if (First->crt.num >= 1 && First->crt.num <= 9)
		{
			num = "0" + First->crt.num;
		}
		else
		{
			num = Convert::ToString(First->crt.num);
		}
		carta += num + First->crt.color;


		return " " + carta;
	}
}

