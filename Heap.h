/*
Charlotte Meola
Heap Assignment: ECE 3310
April 21 2019
"Heap_Tree.h"

*****************************************************

"Heap_Tree.h" does the following:
1) Creates Heap_Tree class.
2) Declares methods and variables of Heap_Tree.

*****************************************************
*/


#pragma once
#include "stdafx.h" // To work on CPP desktop
//#include "pch.h" // To work on laptop
#include<iostream>

using namespace std;
#define CAPACITY 100

class Heap_Tree
{
	// Variables:
	int HeapArray[CAPACITY];
	int size;

	// Member methods:
public:

	Heap_Tree();
	bool empty();
	void insert(int data);
	int retrieve();
	void remove();
	void print();

};