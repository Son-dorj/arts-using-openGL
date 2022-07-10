#include "project.h"
#include<GL/glut.h>

void vicsek()
{
	typedef GLfloat point2[3];
	int points=100000;
    point2 vertices[6]={{0,900},{800,450},{800,-450},{0,-900},{-800,-450},{-800,450}}; 
    int j, k;
    int rand();      
    point2 p ={0.0,50.0};  
    glClear(GL_COLOR_BUFFER_BIT);  
    glColor3f((float)(rand()%1000)/1000,(float)(rand()%1000)/1000,(float)(rand()%1000)/1000);
    for( k=0; k<points; k++)
    {
         	j=rand()%6; 
         
        	p[0] = (p[0]+vertices[j][0])*(1.0/3.0);
         	p[1] = (p[1]+vertices[j][1])*(1.0/3.0);
        
           	glBegin(GL_POINTS);
           	    glVertex2fv(p);
          	glEnd();
    }
}
