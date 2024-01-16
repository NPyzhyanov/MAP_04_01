#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

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
        square = pi * r * r;
        height = 0;
        volume = 0;
    }
};

#endif // CIRCLE_H
