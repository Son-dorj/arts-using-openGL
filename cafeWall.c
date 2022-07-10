#include "project.h"
void squares(int height, int rShift, int j){
        
        if(j % 2 == 1)
            glColor3f(0.0, 0.0, 0.0);
        else 
            glColor3f(1.0, 1.0, 1.0);

        glBegin(GL_QUADS);
            glVertex2i(rShift, height);                
            glVertex2i(rShift, height+100);            
            glVertex2i(rShift+100, height+100);        
            glVertex2i(rShift+100, height);           
    }
void cafeWall(void)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glLineWidth(2);

        int rShift = -500;                             
        int height = -500;                          

        for(int i=0; i < 10; i++){
            for(int j=0; j < 11; j++){
                squares(height, rShift, j);
                rShift += 100;
            }

            switch(i){
                case 0:
                    rShift = -470;
                    break;
                case 1:
                    rShift = -440;
                    break;
                case 2:
                    rShift = -470;
                    break;
                 case 4:
                    rShift = -470;
                    break;
                case 5:
                    rShift = -440;
                    break;
                case 6:
                    rShift = -470;
                    break;
                case 7:
                    rShift = -440;
                    break;
                default: 
                    rShift = -500;
            }
            height += 105;             
        }
        glEnd();
    }

