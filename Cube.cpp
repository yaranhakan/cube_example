#include "Cube.h"

// get volume
double Cube::getVolume() {
	return lenght_ * lenght_ * lenght_;
}


// get surface area
double Cube::getSurfaceArea() {
	return 6 * lenght_ * lenght_;
}


// set lenght
void Cube::setLenght(double lenght) {
	lenght_ = lenght;
}