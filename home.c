#include "project.h"


void drawstring(float x, float y, const char *s)
{
	unsigned int i;
	glRasterPos2f(x,y);
	for(i=0;i<strlen(s);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
}
void drawstring1(float x, float y, const char *s)
{
	unsigned int i;
	glRasterPos2f(x,y);
	for(i=0;i<strlen(s);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
}

void home()
{
	char vtu1[]={"VISVESVARAYA TECHNOLOGICAL "};
	char vtu2[]={"UNIVERSITY"}, 
			cg[]="Computer Graphics Mini Project on",
			title[]="Arts using OpenGL in C", 
			auth1[]="Sonam Dorji		1HK19CS151",
			auth2[]="Sunil Nagar		1HK19CS158",
			guide1[]="Under the guidance of:",
			guide2[]="Prof. Pushpa T.",
			college[]="Cse dept. HKBKCE";
		
	glColor3f(1,0,0);
	int l=strlen(vtu1);
	drawstring(-(l/2)*29.94011976,300,vtu1);
	l=strlen(vtu2);
	drawstring(-(l/2)*29.94011976,250,vtu2);
	l=strlen(cg);
	glColor3f(0,0,1);
	drawstring1(-(l/2)*18.94011976,150,cg);
	l=strlen(title);
	drawstring1(-(l/2)*18.94011976,100,title);
	l=strlen(auth1);
	glColor3f(1,1,1);
	drawstring1(-(l/2)*18.94011976,0,auth1);
	l=strlen(auth2);
	drawstring1(-(l/2)*18.94011976,-50,auth2);
	l=strlen(guide1);
	glColor3f(1,1,0);
	drawstring1(-(l/2)*18.94011976,-150,guide1);
	l=strlen(guide2);
	drawstring1(-(l/2)*18.94011976,-200,guide2);
	l=strlen(college);
	drawstring1(-(l/2)*20.94011976,-250,college);
	
	
}

