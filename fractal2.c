#include "project.h"
#include<GL/glut.h>

void fractal2()
{
	typedef GLfloat point2[3];
	int points=5000;
    point2 vertices[6]={{0,500},{500,250},{500,-250},{0,-500},{-500,-250},{-500,250}}; 
    int j, k;
    int rand();      
    point2 p ={0.0,50.0};  
    glClear(GL_COLOR_BUFFER_BIT);  

    for( k=0; k<points; k++)
    {
         	j=rand()%6; 
         
        	p[0] = (p[0]+vertices[j][0])*(1.0/3.0);
         	p[1] = (p[1]+vertices[j][1])*(1.0/3.0);
        	
        	if(k%6==0)
        		glColor3f((float)(rand()%1000)/1000,0,0);
        	else if(k%6==1)
        		glColor3f((float)(rand()%1000)/1000,(float)(rand()%1000)/1000,0);
        	else if(k%6==2)
        		glColor3f((float)(rand()%1000)/1000,0,(float)(rand()%1000)/1000);
        	else if(k%6==3)
        		glColor3f(0,(float)(rand()%1000)/1000,0);
        	else if(k%6==4)
        		glColor3f(0,0,(float)(rand()%1000)/1000);
        	else if(k%6==5)
        		glColor3f(0,(float)(rand()%1000)/1000,(float)(rand()%1000)/1000);
        	else
        		glColor3f((float)(rand()%1000)/1000,(float)(rand()%1000)/1000,(float)(rand()%1000)/1000);
        
           	glBegin(GL_POINTS);
           	    glVertex2fv(p);
          	glEnd();
    }
}
