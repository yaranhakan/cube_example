#include <iostream>
#include "Cube.h"

int main() {

	Cube c;

	c.setLenght(3.48);

	double volume = c.getVolume();

	std::cout << "Volume: " << volume << std::endl;

	return 0;
}