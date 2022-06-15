#include "project.h"
#include<GL/glut.h>

void line1()
{
	int x=100;
	glBegin(GL_LINES);
	glVertex2f($w,$h);
	glVertex2f(-$w,-$h);
	glEnd();
}
