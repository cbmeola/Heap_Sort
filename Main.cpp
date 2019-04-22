/*
Charlotte Meola
Heap Assignment: ECE 3310
April 21 2019
"Main.cpp"

*****************************************************

"Main.cpp" runs the main function.

*****************************************************
*/


#include "stdafx.h" // To work on CPP desktop
//#include "pch.h" // To work on laptop
#include<iostream>
#include <string>
using namespace std;
#include "Heap.h"


int main()
{

	Heap_Tree *h = new Heap_Tree();

	// If the heap is empty, add items:
	if (h->empty() == true)
	{
		h->insert(5);
		h->insert(8);
		h->insert(2);
		h->insert(15);
		h->insert(7);
		h->insert(21);
		h->insert(25);
	}


	// Remove all elements from heap and print results every iteration:
	for (int k = 1; k < 8; k++)
	{
		// Finds the largest element:
		h->retrieve();
		// Prints new heap:
		cout << "\nThe new heap is: \n";
		h->print();
		// Removes one more:
		h->remove();
	}


	return 0;
}