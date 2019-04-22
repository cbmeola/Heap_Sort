/*
Charlotte Meola
Heap Assignment: ECE 3310
April 21 2019
"Heap.cpp"

***********************************************************************

"Heap.cpp" does the following:

1) Contains function bodies for Heap_Tree methods, including:
- Heap_Tree(): Constructor.
- empty(): Checks to see if the heap is empty.
- insert(): Inserts element into the heap.
- retrieve(): Retrieves the largest element from the heap.
- remove(): Removes the largest element from the heap.
- print(): Prints new heap.

***********************************************************************
*/


#include "stdafx.h" // To work on CPP desktop
//#include "pch.h" // To work on laptop
#include<iostream>
using namespace std;
#include "Heap.h"
#define CAPACITY 100

int temp = 0;

Heap_Tree::Heap_Tree()
{
	size = '\0';
	HeapArray[0] = 0;
}

// Determines left child:
int left(int i) { return (2 * i + 1); }


// Determines right child:
int right(int i) { return (2 * i + 2); }


// Swaps elements in heap:
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


bool Heap_Tree::empty()
{
	if (HeapArray[0] == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}



void Heap_Tree::insert(int data)
{
	size++;
	HeapArray[size] = data;
	int tmp;
	tmp = size;
	int parent = (tmp - 1) / 2;
	while (parent >= 1 && HeapArray[tmp] > HeapArray[parent])
	{
		swap(HeapArray[tmp], HeapArray[parent]);
		tmp = parent;
		parent = (tmp - 1) / 2;
	}
}




// Retreive the largest heap element:
int Heap_Tree::retrieve()
{

	cout << "The largest heap element is: " << HeapArray[1] << endl;
	return HeapArray[1];


}



void Heap_Tree::remove()
{

	HeapArray[1] = HeapArray[size];
	size--;

	int i;

	for (i = 1; i <= size; i++)
	{
		int c = HeapArray[left(i)];
		c = 2 * (i);
		while (i <= c)
		{
			if (c < size && (HeapArray[c] < HeapArray[c + 1]))
				c++;
			if (HeapArray[i] < HeapArray[c])
			{
				swap(HeapArray[i], HeapArray[c]);
				i = c;
				c = 2 * c;
			}
			else return;

		}
	}




}


void Heap_Tree::print()
{
	for (int i = 1; i <= size; ++i)
	{
		cout << HeapArray[i] << " ";

	}
	cout << endl << endl;
}

