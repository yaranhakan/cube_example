/*
	This is a header file for the cube project
*/

#pragma once

namespace uiuc {

	class Cube {

	public:

		double getVolume();
		double getSurfaceArea();
		void setLenght(double lenght);

	private:

		double lenght_;

	};
}