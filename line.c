#include "project.h"
#include<GL/glut.h>

void line1()
{
	glBegin(GL_LINES);
	glVertex2f(-100,-100);
	glVertex2f(100,100);
	glEnd();
}
