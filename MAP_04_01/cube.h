#ifndef CUBE_H
#define CUBE_H

#include "shape.h"

class Cube : public Shape
{
public:
    Cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2)
    {
        type = 2;
        
        x1 = _x1; y1 = _y1; z1 = _z1;
		x2 = _x2; y2 = _y2; z2 = _z2;
		x3 = _x1; y3 = _y2; z3 = _z2;
		x4 = _x1; y4 = _y1; z4 = _z2;
		x5 = _x2; y5 = _y1; z5 = _z2;
		x6 = _x2; y6 = _y1; z6 = _z1;
		x7 = _x2; y7 = _y2; z7 = _z1;
		x8 = _x1; y8 = _y2; z8 = _z1;
        
        int a = abs(x1 - x2);
        int b = abs(y1 - y2);
        int c = abs(z1 - z2);
        
        square = 2 * a * b + 2 * a * c + 2 * b * c;
        volume = a * b * c;
        radius = 0;
        height = 0;
    }
    
private:
    int x1, y1, z1,
        x2, y2, z2,
        x3, y3, z3,
        x4, y4, z4,
        x5, y5, z5,
        x6, y6, z6,
        x7, y7, z7,
        x8, y8, z8;
    
};

#endif // CUBE_H
