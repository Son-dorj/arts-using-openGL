#include<GL/glut.h>
#define width 1920
#define height 1080
float x=0,y=0;
void line1();
void myInit()
{
	glClearColor(0,0,0,1);
	glColor3f(1,1,1);
	gluOrtho2D(-width/2,width/2,-height/2,height/2);
}
void Display()
{
	line1();
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitWindowPosition(10,10);
	glutInitWindowSize(width,height);
	glutCreateWindow("looping");
	myInit();
	glutDisplayFunc(Display);
	glutMainLoop();
}
