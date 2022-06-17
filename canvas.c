#include <stdio.h>
#include <GL/glut.h>
//#include "project.h"
#define X 500
#define TOTAL 4
int current=2;
void line1();
void pattern1();
void fractal1();
void fractal2();
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	switch(current)
	{
		case 0:	line1();	break;
		case 1: pattern1();	break;
		case 2: fractal1();	break;
		case 3: fractal2();	break;
		default:break;
	}
	glutSwapBuffers();
}
void myReshape(int w,int h)// common reshape func for all prgrms
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
		glOrtho(-X,X,-X*(GLfloat)h/(GLfloat)w,X*(GLfloat)h/(GLfloat)w,-10.0,10.0);
	else
	glOrtho(-X*(GLfloat)w/(GLfloat)h,X*(GLfloat)w/(GLfloat)h,-X,X,-10.0,10.0);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(500,500);
glutCreateWindow("color cube viewer");
glutReshapeFunc(myReshape);
glutDisplayFunc(display);
glEnable(GL_DEPTH_TEST);
glutMainLoop();
return 0;
}

