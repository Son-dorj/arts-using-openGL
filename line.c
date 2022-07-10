#include "project.h"

void line()
{
	int x=100;
	glBegin(GL_LINES);
	for(int i=0;i<100;i++)
	{
		int x1=rand()%500,y1=rand()%500,x2=rand()%500,y2=rand()%500;
		glColor3f((float)x1/500,(float)y1/500,(float)x2/500);
		glVertex2d(x1,y1);
		glVertex2d(x2,y2);
	}
	for(int i=0;i<100;i++)
	{
		int x1=rand()%500,y1=rand()%500,x2=rand()%500,y2=rand()%500;
		glColor3f((float)x1/500,(float)y1/500,(float)x2/500);
		glVertex2d(-x1,-y1);
		glVertex2d(-x2,-y2);
	}
	for(int i=0;i<100;i++)
	{
		int x1=rand()%500,y1=rand()%500,x2=rand()%500,y2=rand()%500;
		glColor3f((float)x1/500,(float)y1/500,(float)x2/500);
		glVertex2d(-x1,y1);
		glVertex2d(-x2,y2);
	}
	for(int i=0;i<100;i++)
	{
		int x1=rand()%500,y1=rand()%500,x2=rand()%500,y2=rand()%500;
		glColor3f((float)x1/500,(float)y1/500,(float)x2/500);
		glVertex2d(x1,-y1);
		glVertex2d(x2,-y2);
	}
	glEnd();
}
