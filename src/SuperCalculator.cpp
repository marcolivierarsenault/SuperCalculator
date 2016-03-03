/*
 ============================================================================
 Name        : SuperCalculator.cpp
 Author      : Marc-Olivier Arsenault & Eric Tremblay
 Version     :
 Copyright   : 
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
#include "ProcessCalculator.h"

using namespace std;

int main(void) {
	ProcessCalculator pp(564);
	cout << "Hello World" << endl; /* prints Hello World */
	pp.print();
	return 0;
}
