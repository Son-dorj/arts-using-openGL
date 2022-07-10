#include "project.h"
void sphere() {

  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(1.0, 1.0, 1.0);
  glScalef(100,100,0);
  int x=rand()%360,y=rand()%360,z=rand()%360;
  glRotatef(x,1,0,0);
  glRotatef(y,0,1,0);
  glRotatef(z,0,0,1);
  glutWireSphere(4, 20,20);
}
