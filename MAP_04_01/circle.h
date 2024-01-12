#ifndef CIRCLE_H
#define CIRCLE_H

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif // _USE_MATH_DEFINES

#include "shape.h"
#include<cmath>

class Circle : public Shape
{
public:
    Circle(int _x1, int _y1, double r)
    {
        type = 3;
        
        x1 = _x1;
        y1 = _y1;
        
        radius = r;
        square = M_PI * r * r;
        height = 0;
        volume = 0;
    }
    
private:
    int x1, y1;
    
};

#endif // CIRCLE_H
