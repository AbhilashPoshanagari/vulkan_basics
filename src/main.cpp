#include <iostream>
#include <glm/glm.hpp>
#include <cstdint>
#include <cmath>
#include <gsl/gsl>

int main(std::int32_t argc, gsl::zstring* argv) {
	gsl::span<gsl::zstring> arguments(argv, argc);


	std::cout << "Hello world from Abhi" << std::endl;
	return 0;
}