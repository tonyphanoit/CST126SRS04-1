// WICLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#include "CSWoman.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

int main()
{
	_CrtDumpMemoryLeaks();
	const auto woman1 = new CSWoman("Ada Lovelace", 1815, "Prophet of Computer Age");
	const auto woman2 = new  CSWoman("Edith Clarke", 1883, "Keeps Current, Takes Charge");
	const auto woman3 = new  CSWoman("Grace Hopper", 1906, "Amazing Grace, Queen of Software");
	const auto woman4 = new  CSWoman("Evelyn Boyd Granville", 1924, "Race, Space, & Education Advocacy");
	const auto woman5 = new  CSWoman("Sister Mary Kenneth Keller", 1913, "First Female Computer Science PhD");
	const auto woman6 = new  CSWoman("Susan Kare", 1954, "The Apple Icon");
	const auto woman7 = new  CSWoman("Carol Shaw", 1955, "Atari Game Developer");
	const auto woman8 = new  CSWoman("Janese Swanson", 1958, "Can You Make it Pink?");
	const auto woman9 = new  CSWoman("Radia Perlman", 1951, "Don't Call Me Mother of the Internet");
	const auto woman10 = new  CSWoman("Marissa Mayer", 1975, "CEO of Yahoo!");
	
	LinkedList list;
	list.AddWoman(woman1);
	list.AddWoman(woman2);
	list.AddWoman(woman3);
	list.AddWoman(woman4);
	list.AddWoman(woman5);
	list.AddWoman(woman6);
	list.AddWoman(woman7);
	list.AddWoman(woman8);
	list.AddWoman(woman9);
	list.AddWoman(woman10);
	
	list.reverse();
	list.PrintList();
	list.reverse();
	list.PrintList();
	list.DeleteList();

	cin.get();
    return 0;
}

