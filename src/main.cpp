#include <iostream>
#include <glm/glm.hpp>
#include <cstdint>
#include <cmath>
#include <gsl/gsl>
#include <glfw_initialization.h>
#include <GLFW/glfw3.h>

int main() {
  std::cout << "hello world from vulkan" << std::endl;
  veng::GlfwInitialization _glfw;

  gsl::not_null<GLFWwindow*> window = glfwCreateWindow(800, 600, "Abhi vulkan engen", nullptr, nullptr);
  gsl::final_action _clean_window([window]() -> void {
    glfwDestroyWindow(window);
  });

  while (!glfwWindowShouldClose(window)) {
    glfwPollEvents();
  }
	return EXIT_SUCCESS;
}
