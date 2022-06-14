#include "project.h"
#include<GL/glut.h>

void line1()
{
	glBegin(GL_LINES);
	glVertex2f(-.5,-.5);
	glVertex2f(.5,.5);
	glEnd();
}
