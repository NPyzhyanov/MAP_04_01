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
        
        update_parameters();
    }
    
    void shift(int sh_x, int sh_y, int sh_z) override
    {
        x1 += sh_x; y1 += sh_y; z1 += sh_z;
        x2 += sh_x; y2 += sh_y; z2 += sh_z;
        x3 += sh_x; y3 += sh_y; z3 += sh_z;
        x4 += sh_x; y4 += sh_y; z4 += sh_z;
        x5 += sh_x; y5 += sh_y; z5 += sh_z;
        x6 += sh_x; y6 += sh_y; z6 += sh_z;
        x7 += sh_x; y7 += sh_y; z7 += sh_z;
        x8 += sh_x; y8 += sh_y; z8 += sh_z;
        
        update_parameters();
    }
    
    void scaleX(int factor) override
    {
        x1 *= factor;
        x2 *= factor;
        x3 *= factor;
        x4 *= factor;
        x5 *= factor;
        x6 *= factor;
        x7 *= factor;
        x8 *= factor;
        
        update_parameters();
    }
    
    void scaleY(int factor) override
    {
        y1 *= factor;
        y2 *= factor;
        y3 *= factor;
        y4 *= factor;
        y5 *= factor;
        y6 *= factor;
        y7 *= factor;
        y8 *= factor;
        
        update_parameters();
    }
    
    void scaleZ(int factor) override
    {
        z1 *= factor;
        z2 *= factor;
        z3 *= factor;
        z4 *= factor;
        z5 *= factor;
        z6 *= factor;
        z7 *= factor;
        z8 *= factor;
        
        update_parameters();
    }
    
    void scale(int divisor) override
    {
        x1 /= divisor; y1 /= divisor; z1 /= divisor;
        x2 /= divisor; y2 /= divisor; z2 /= divisor;
        x3 /= divisor; y3 /= divisor; z3 /= divisor;
        x4 /= divisor; y4 /= divisor; z4 /= divisor;
        x5 /= divisor; y5 /= divisor; z5 /= divisor;
        x6 /= divisor; y6 /= divisor; z6 /= divisor;
        x7 /= divisor; y7 /= divisor; z7 /= divisor;
        x8 /= divisor; y8 /= divisor; z8 /= divisor;
        
        update_parameters();
    }
    
protected:
    void update_parameters() override
    {
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
