#include "pch.h"
#include "stdafx.h"
#include "Pila.h"
#include "ctime"
#include <stdio.h>      
#include <time.h> 
#include <stdlib.h> 
using namespace System;

using namespace System;

int main(array<System::String ^> ^args)
{
	Pila slack;
	Pila^ plaux = gcnew Pila;
	Pila^ plrnd = gcnew Pila;
	Pila^ pl1 = gcnew Pila;
	Pila^ auxpl1 = gcnew Pila;
	Pila^ pl2 = gcnew Pila;
	Pila^ auxpl2 = gcnew Pila;
	Pila^ pl3 = gcnew Pila;
	Pila^ auxpl3 = gcnew Pila;
	Pila^ pl4 = gcnew Pila;
	Pila^ auxpl4 = gcnew Pila;
	Pila^ pl5 = gcnew Pila;
	Pila^ auxpl5 = gcnew Pila;
	Pila^ pl6 = gcnew Pila;
	Pila^ auxpl6 = gcnew Pila;
	Pila^ pl7 = gcnew Pila;
	Pila^ auxpl7 = gcnew Pila;
	Pila^ plog = gcnew Pila;
	Pila^ pldest = gcnew Pila;
	slack.llenar();
	srand(time(NULL));
	int r = 52;
	Carta^ aux;
	Carta^ aux2;
	Carta^ pilarandom;
	int cont1 = 1, cont2 = 1, cont3 = 1, cont4 = 1, cont5 = 1, cont6 = 1, cont7 = 1;
	int plorigen, pldestino;
	bool ciclo1 = true;
	bool ciclo2 = true;
	String^ numrnd;
	String^ a1;
	String^ a2;
	String^ a3;
	String^ a4;
	String^ a5;
	String^ a6;
	String^ a7;
	int b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0, b7 = 0;
	int c1 = 1, c2 = 1, c3 = 1, c4 = 1, c5 = 1, c6 = 1, c7 = 1;
	while (r > 1)
	{
		int a = rand() % r + 1;
		for (int i = 0; i < (a - 1); i++)
		{
			aux = slack.pop();
			plaux->push(aux);

		}
		pilarandom = slack.pop();
		plrnd->push(pilarandom);


		for (int i = (a - 1); i > 0; i--)
		{
			aux2 = plaux->pop();
			slack.push(aux2);

		}
		r--;
	}
	for (int i = 0; i < 7; i++)
	{
		pl7->push(plrnd->pop());
	}
	for (int i = 0; i < 6; i++)
	{
		pl6->push(plrnd->pop());
	}
	for (int i = 0; i < 5; i++)
	{
		pl5->push(plrnd->pop());
	}
	for (int i = 0; i < 4; i++)
	{
		pl4->push(plrnd->pop());
	}
	for (int i = 0; i < 3; i++)
	{
		pl3->push(plrnd->pop());
	}
	for (int i = 0; i < 2; i++)
	{
		pl2->push(plrnd->pop());
	}
	for (int i = 0; i < 1; i++)
	{
		pl1->push(plrnd->pop());
	}
	auxpl1->push(pl1->pop());
	auxpl2->push(pl2->pop());
	auxpl3->push(pl3->pop());
	auxpl4->push(pl4->pop());
	auxpl5->push(pl5->pop());
	auxpl6->push(pl6->pop());
	auxpl7->push(pl7->pop());
	Console::WriteLine("Bienvenido al solitario");
	Console::WriteLine("Seleccione de que pila a otra pila quiere mover la carta, seleccione numeros del 1 al 7 para identificar las pilas");
	Console::WriteLine("Si en la pila le aparece un 0 significa que esta pila esta vacia, lo cual significa que no puede sacar cartas esta pila");
	Console::WriteLine("Para acceder al mazo necesita colocar 8 cuando le pregunten de donde quiere sacar la carta");
	Console::ReadKey();
	while (ciclo2 == true)
	{
		Console::Clear();
		if (auxpl1->IsEmpty())
		{
			auxpl1->push(pl1->pop());
		}
		if (auxpl2->IsEmpty())
		{
			auxpl2->push(pl2->pop());
		}
		if (auxpl3->IsEmpty())
		{
			auxpl3->push(pl3->pop());
		}
		if (auxpl4->IsEmpty())
		{
			auxpl4->push(pl4->pop());
		}
		if (auxpl5->IsEmpty())
		{
			auxpl5->push(pl5->pop());
		}
		if (auxpl6->IsEmpty())
		{
			auxpl6->push(pl6->pop());
		}
		if (auxpl7->IsEmpty())
		{
			auxpl7->push(pl7->pop());
		}
		if (plrnd->Peek()->crt.num >= 1 && plrnd->Peek()->crt.num <= 9)
		{
			numrnd = "0" + plrnd->Peek()->crt.num;
		}
		else
		{
			numrnd = Convert::ToString(plrnd->Peek()->crt.num);
		}
		if (auxpl1->IsEmpty())
		{
			a1 = " ";
		}
		else
		{
			if (cont1 == 1)
			{
				a1 = auxpl1->recorrer();
			}
			else
			{
				if (b1 != c1)
				{
					a1 = auxpl1->recorrer();
				}
				else
				{
					a1 += auxpl1->recorrer();
					c1++;
				}
			}
		}
		if (auxpl2->IsEmpty())
		{
			a2 = " ";
		}
		else
		{
			if (cont2 == 1)
			{
				a2 = auxpl2->recorrer();
			}
			else
			{
				if (b2 != c2)
				{
					a2 = auxpl2->recorrer();
				}
				else
				{
					a2 += auxpl2->recorrer();
					c2++;
				}
			}
		}
		if (auxpl3->IsEmpty())
		{
			a3 = " ";
		}
		else
		{
			if (cont3 == 1)
			{
				a3 = auxpl3->recorrer();
			}
			else
			{
				if (b3 != c3)
				{
					a3 = auxpl3->recorrer();
				}
				else
				{
					a3 += auxpl3->recorrer();
					c3++;
				}
			}
		}
		if (auxpl4->IsEmpty())
		{
			a4 = " ";
		}
		else
		{
			if (cont4 == 1)
			{
				a4 = auxpl4->recorrer();
			}
			else
			{
				if (b4 != c4)
				{
					a4 = auxpl4->recorrer();
				}
				else
				{
					a4 += auxpl4->recorrer();
					c4++;
				}
			}
		}
		if (auxpl5->IsEmpty())
		{
			a5 = " ";
		}
		else
		{
			if (cont5 == 1)
			{
				a5 = auxpl5->recorrer();
			}
			else
			{
				if (b5 != c5)
				{
					a5 = auxpl5->recorrer();
				}
				else
				{
					a5 += auxpl5->recorrer();
					c5++;
				}
			}
		}
		if (auxpl6->IsEmpty())
		{
			a6 = " ";
		}
		else
		{
			if (cont6 == 1)
			{
				a6 = auxpl6->recorrer();
			}
			else
			{
				if (b6 != c6)
				{
					a6 = auxpl6->recorrer();
				}
				else
				{
					a6 += auxpl6->recorrer();
					c6++;
				}
			}
		}
		if (auxpl7->IsEmpty())
		{
			a7 = " ";
		}
		else
		{
			if (cont7 == 1)
			{
				a7 = auxpl7->recorrer();
			}
			else
			{
				if (b7 != c7)
				{
					a7 = auxpl7->recorrer();
				}
				else
				{
					a7 += auxpl7->recorrer();
					c7++;
				}
			}
		}
		Console::WriteLine("Mazo: " + numrnd + plrnd->Peek()->crt.color);
		Console::WriteLine("G1: " + a1 + " ");
		Console::WriteLine("G2: " + a2 + " ");
		Console::WriteLine("G3: " + a3 + " ");
		Console::WriteLine("G4: " + a4 + " ");
		Console::WriteLine("G5: " + a5 + " ");
		Console::WriteLine("G6: " + a6 + " ");
		Console::WriteLine("G7: " + a7 + " ");



		while (ciclo1 == true)
		{
			try
			{
				Console::WriteLine("Ingrese la pila de donde quiere mover una carta");
				plorigen = Convert::ToInt32(Console::ReadLine());
				if (plorigen >= 1 && plorigen <= 8)
				{
					ciclo1 = false;
				}
				else
				{
					Console::WriteLine("Error tiene que ingresar un número del 1 al 7");
					Console::ReadKey();
					ciclo1 = true;
				}
			}
			catch (...)
			{
				Console::WriteLine("Error tiene que ingresar un número");
				Console::ReadKey();
				ciclo1 = true;
			}
		}
		ciclo1 = true;
		while (ciclo1 == true)
		{
			try
			{
				Console::WriteLine("Ingrese la pila a donde quiere mover una carta");
				pldestino = Convert::ToInt32(Console::ReadLine());
				if (pldestino >= 1 && pldestino <= 7)
				{
					ciclo1 = false;
				}
				else
				{
					Console::WriteLine("Error tiene que ingresar un número del 1 al 7");
					Console::ReadKey();
					ciclo1 = true;
				}
			}
			catch (...)
			{
				Console::WriteLine("Error tiene que ingresar un número");
				Console::ReadKey();
				ciclo1 = true;
			}
		}
		ciclo1 = true;
		switch (plorigen)
		{
		case 1:
			plog = auxpl1;
			break;
		case 2:
			plog = auxpl2;
			break;
		case 3:
			plog = auxpl3;
			break;
		case 4:
			plog = auxpl4;
			break;
		case 5:
			plog = auxpl5;
			break;
		case 6:
			plog = auxpl6;
			break;
		case 7:
			plog = auxpl7;
			break;
		case 8:
			plog = plrnd;
			break;
		}
		switch (pldestino)
		{
		case 1:
			pldest = auxpl1;
			break;
		case 2:
			pldest = auxpl2;
			break;
		case 3:
			pldest = auxpl3;
			break;
		case 4:
			pldest = auxpl4;
			break;
		case 5:
			pldest = auxpl5;
			break;
		case 6:
			pldest = auxpl6;
			break;
		case 7:
			pldest = auxpl7;
			break;

		}
		if (plog->Peek()->crt.num == (pldest->Peek()->crt.num - 1) && plog->Peek()->crt.color != pldest->Peek()->crt.color && plorigen >= 1 && plorigen <= 7)
		{
			pldest->push(plog->pop());
			switch (plorigen)
			{
			case 1:
				auxpl1 = plog;
				break;
			case 2:
				auxpl2 = plog;
				break;
			case 3:
				auxpl3 = plog;
				break;
			case 4:
				auxpl4 = plog;
				break;
			case 5:
				auxpl5 = plog;
				break;
			case 6:
				auxpl6 = plog;
				break;
			case 7:
				auxpl7 = plog;;
				break;
			}
			switch (pldestino)
			{
			case 1:
				auxpl1 = pldest;
				cont1++;
				b1++;
				break;
			case 2:
				auxpl2 = pldest;
				cont2++;
				b2++;
				break;
			case 3:
				auxpl3 = pldest;
				cont3++;
				b3++;
				break;
			case 4:
				auxpl4 = pldest;
				cont4++;
				b4++;
				break;
			case 5:
				auxpl5 = pldest;
				cont5++;
				b5++;
				break;
			case 6:
				auxpl6 = pldest;
				cont6++;
				b6++;
				break;
			case 7:
				auxpl7 = pldest;
				cont7++;
				b7++;
				break;
			}
		}
		else
		{
			if (plorigen == 8)
			{
				pldest->push(plog->pop());
				plrnd = plog;
				switch (pldestino)
				{
				case 1:
					auxpl1 = pldest;

					break;
				case 2:
					auxpl2 = pldest;

					break;
				case 3:
					auxpl3 = pldest;

					break;
				case 4:
					auxpl4 = pldest;

					break;
				case 5:
					auxpl5 = pldest;

					break;
				case 6:
					auxpl6 = pldest;

					break;
				case 7:
					auxpl7 = pldest;

					break;
				}
			}
			else
			{
				Console::WriteLine("Movimiento no posible");
				Console::ReadKey();
			}
		}
		if (cont1 == 5)
		{
			Console::WriteLine("Usted ha ganado");
			Console::WriteLine("Con la pila 1");
			ciclo2 = false;
		}
		if (cont2 == 5)
		{
			Console::WriteLine("Usted ha ganado");
			Console::WriteLine("Con la pila 2");
			ciclo2 = false;
		}
		if (cont3 == 5)
		{
			Console::WriteLine("Usted ha ganado");
			Console::WriteLine("Con la pila 3");
			ciclo2 = false;
		}
		if (cont4 == 5)
		{
			Console::WriteLine("Usted ha ganado");
			Console::WriteLine("Con la pila 4");
			ciclo2 = false;
		}
		if (cont5 == 5)
		{
			Console::WriteLine("Usted ha ganado");
			Console::WriteLine("Con la pila 5");
			ciclo2 = false;
		}
		if (cont6 == 5)
		{
			Console::WriteLine("Usted ha ganado");
			Console::WriteLine("Con la pila 6");
			ciclo2 = false;
		}
		if (cont7 == 5)
		{
			Console::WriteLine("Usted ha ganado");
			Console::WriteLine("Con la pila 7");
			ciclo2 = false;
		}
		if (plrnd->IsEmpty())
		{
			Console::WriteLine("Usted se quedo sin cartas, ha perdido");
			ciclo2 = false;
		}
	}
	Console::ReadKey();

}

