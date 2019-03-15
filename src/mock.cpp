//
// Created by Kruegener on 3/15/2019.
//

#include "mock.h"
#include <iostream>

float commit_bias = 3.1;

int main(){

#ifdef AVX
	MMUPS += 1;
#endif

#ifdef AVX2
	MMUPS += 2;
#endif

	MMUPS += commit_bias;

	std::cout << "Simulation speed: " << MMUPS << " Molecule-updates per second." << std::endl;

	return 0;

}