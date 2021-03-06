/*
 * Window.h
 *
 *  Created on: May 6, 2016
 *      Author: sara
 */

#ifndef WINDOW_H_
#define WINDOW_H_

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>

using std::string;

class Window {
private:
	GLFWwindow* window;

	unsigned int VIEW_WIDTH;
	unsigned int VIEW_HEIGHT;

	// check if window is created successfully
	bool checkWindow();

	//this function initaite glew library and set some options
	void prepare_glew();

public:
	// the constructor initialize GLFW library which is responsible for creating the window
	Window();

	void set_viewport(unsigned int width, unsigned int height);

	void enable_property( GLenum property );
	void disable_property( GLenum property );

	//create window with the preset properties
	// takes the width and the hight of the window and the desigred title
	// and return a pointer to the created window of type GLFWwindow
	bool createWindow(unsigned int width, unsigned int height, string title);

	// sets the properaties of the window
	// takes the target argument and its value
	void setWindowProp(GLuint target, GLuint value);

	// check the window is closed or not
//	void glMainLoop();

	// TODO:
	void prepare_keyboard();
	void prepare_cursor();

	//todo : need to be implemnted
	void mouse_callback(GLFWwindow* window, double xpos, double ypos);

	// todo : need to be implemented
	void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);

	// todo : need to be implemnted
	void do_movement();

	virtual ~Window();
};
#endif /* WINDOW_H_ */
