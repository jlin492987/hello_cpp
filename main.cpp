#include <iostream>
#include "math_utils.h"

int main() {
	// pretend these are the camera center and an armor plate
	double d = distance(320, 240, 400, 300);
	std::cout << "Distance to target: " << d << " pixels" << std::endl;
	return 0;
}
