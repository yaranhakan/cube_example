#include <iostream>
#include "Cube.h"

using uiuc::Cube;

int main() {

	Cube c;

	c.setLenght(3.48);

	double volume = c.getVolume();

	std::cout << "Volume: " << volume << std::endl;

	return 0;
}