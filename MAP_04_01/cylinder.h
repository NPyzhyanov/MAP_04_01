#ifndef CYLINDER_H
#define CYLINDER_H

#include "shape.h"

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
        square = 2 * pi * r * r + 2 * pi * r * h;
        volume = pi * r * r * h;
    }
};

#endif // CYLINDER_H
