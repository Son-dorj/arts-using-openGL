#include "project.h"
void taurus() {

  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(1.0, 1.0, 1.0);
  glScalef(100,100,0);
  int x=rand()%360;
  glRotatef(x,1,1,0);
  glutWireTorus(2,3,15, 30);

}
