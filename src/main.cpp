#include <iostream>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "window/window.h"
#include "window/Events.h"

int WIDTH = 1280;
int HEIGHT = 720;

int main() {
	Window::initialize(WIDTH, HEIGHT, "mcraft");
	Events::initialize();

	while (!Window::isShouldClose()) {
		Events::pullEvents();
		if (Events::jpressed(GLFW_KEY_ESCAPE)) {
			Window::setShouldClose(true);
		}
		Window::swapBuffers();
	}
	Window::terminate();
	return 0;
}