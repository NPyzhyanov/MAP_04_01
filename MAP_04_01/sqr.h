#ifndef SQR_H
#define SQR_H

#include "shape.h"

class Sqr : public Shape
{
public:
    Sqr(int _x1, int _y1, int _x2, int _y2)
    {
        type = 1;
        
        x1 = _x1; y1 = _y1;
		x2 = _x2; y2 = _y2;
		x3 = _x1; y3 = _y2;
		x4 = _x2; y4 = _y1;
        
        int a = abs(x1 - x2);
        int b = abs(y1 - y2);
        
        square = a * b;
        volume = 0;
        radius = 0;
        height = 0;
    }
    
private:
    int x1, y1,
        x2, y2,
        x3, y3,
        x4, y4;
    
};

#endif // SQR_H
