#include<GL/glut.h>
#include "project.h"
#include<math.h>
#include<stdio.h>
#include <time.h>
void pattern1()
{
	
	glBegin(GL_POINTS);
    float theta,r,x,y;
  	for(theta=0;theta<360*10;theta++)
  	{
    	int l=rand()%256,m=rand()%256,n=rand()%256;
    	r=exp(theta/300);
    	x=r*cos(theta);
    	y=r*sin(theta);
    	glColor3f((float)l/256,(float)m/256,(float)n/256);
    	glVertex2d(x,y);
    }
    glEnd();
}
