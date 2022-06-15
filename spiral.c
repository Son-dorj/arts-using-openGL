#include<GL/glut.h>
#include "project.h"
#include<math.h>
#include<stdio.h>
void pattern1()
{
	glBegin(GL_POINTS);
    float theta,r,x,y;
  	for(theta=0;theta<360*5;theta++)
  	{
    	r=exp(theta/200);
    	x=r*cos(theta);
    	y=r*sin(theta);
    	glColor3f((rand()%200)/200,(rand()%200)/200,(rand()%200)/200);
    	glVertex2d(x,y);
    }
    glEnd();
}
