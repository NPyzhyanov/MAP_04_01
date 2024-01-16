#ifndef CYLINDER_H
#define CYLINDER_H

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif // _USE_MATH_DEFINES

#include "shape.h"
#include <cmath>

class Cylinder : public Shape
{
public:
    Cylinder(int _x1, int _y1, double r, double h)
    {
        type = 4;
        
        dimensions = 2;
        points_amount = 1;
        
        std::vector<int> center {_x1, _y1 };
        Coordinates.push_back(center);
        
        radius = r;
        height = h;
        square = 2 * M_PI * r * r + 2 * M_PI * r * h;
        volume = M_PI * r * r * h;
    }
};

#endif // CYLINDER_H
