/*
 * ProcessCalculator.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: marco
 */

#include <iostream>
#include "ProcessCalculator.h"

using namespace std;

ProcessCalculator :: ProcessCalculator(const int i)
	:value(i)
{}

void ProcessCalculator::print(){

	cout << value << endl;
}

