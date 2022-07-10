#include "project.h"
void drawtree(int n)
{
    if(n>0)
    {

     glPushMatrix();

     glTranslatef(-0.5,1,0);
     glRotatef(45, 0.0, 0.0, 1.0);


     glScalef(0.707,0.707,0.707);

      drawtree(n-1);

     glPopMatrix();
 
     glPushMatrix();
     glTranslatef(0.5,1,0);
     glRotatef(-45, 0.0, 0.0, 1.0);
     glScalef(0.707,0.707,0.707);
     drawtree(n-1);
     glPopMatrix();
     glutSolidCube(1);
    }
}

void cubeTree()
{
   int n=10;
   glTranslatef(0,-200,0);
   glColor3f(0, 1.0, 0.8);
   glScalef(100,100,100);
   drawtree(n);
}

