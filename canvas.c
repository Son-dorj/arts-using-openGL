#include <stdio.h>
#include <GL/glut.h>
#include "project.h"
#define X 500
#define TOTAL 4
int current=0;
void myinit()
{

glClearColor(0,0,0,1.0);
glColor3f(1.0,0.0,0.0);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,499.0,0.0,499.0);
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	switch(current)
	{
		case 0:	home();	break;
		case 1:	line();	break;
		case 2: spiral();	break;
		case 3: fern();	break;
		case 4: vicsek();	break;
		default:break;
	}
	glutSwapBuffers();
}
void mymenu(int id)
{
	current=id;
	glutPostRedisplay();
}
void myReshape(int w,int h)
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
glutCreateWindow("Arts Using OpenGL");
glutCreateMenu(mymenu);
glutAddMenuEntry("line",1);
glutAddMenuEntry("spiral",2);
glutAddMenuEntry("fern fractal",3);
glutAddMenuEntry("vicsek-5",4);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutReshapeFunc(myReshape);
glutDisplayFunc(display);
glEnable(GL_DEPTH_TEST);
myinit();
glutMainLoop();
return 0;
}

