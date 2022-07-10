#include "project.h"

void logSpiral()
{
	
	float radius = 1.0f,x,y;
	int a=rand()%500,b=rand()%500,c=rand()%500;
	glBegin(GL_POINTS);
	glColor3f((float)a/500,(float)b/500,(float)c/500);
	for (float angle = 0; angle < 14400; angle += 1)
	{
    	x = cos(angle)*radius;
    	y = sin(angle)*radius;
    	radius += 0.1f;
    	glVertex2f(x, y);
	}
	glEnd();
}
