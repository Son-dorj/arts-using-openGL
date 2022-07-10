#include "project.h"
void squares(int height, int rShift);
    
void hermanDot(void)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glLineWidth(2);

      
        int rShift = -500;                             
        int height = -500;                            
        for(int i=0; i < 10; i++){
            for(int j=0; j < 10; j++){
                squares(height, rShift);
                rShift += 120;
            }
            rShift = -500;                                   
            height = height + 120;                     
        }
        glEnd();
    }
