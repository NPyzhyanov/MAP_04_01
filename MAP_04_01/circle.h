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
        
        dimensions = 2;
        points_amount = 1;
        
        std::vector<int> center {_x1, _y1 };
        Coordinates.push_back(center);
        
        radius = r;
        square = M_PI * r * r;
        height = 0;
        volume = 0;
    }
};

#endif // CIRCLE_H
