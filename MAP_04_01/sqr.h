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
        
        update_parameters();
    }
    
    void shift(int sh_x, int sh_y) override
    {
        x1 += sh_x; y1 += sh_y;
        x2 += sh_x; y2 += sh_y;
        x3 += sh_x; y3 += sh_y;
        x4 += sh_x; y4 += sh_y;
        
        update_parameters();
    }
    
    void scaleX(int factor) override
    {
        x1 *= factor;
        x2 *= factor;
        x3 *= factor;
        x4 *= factor;
        
        update_parameters();
    }
    
    void scaleY(int factor) override
    {
        y1 *= factor;
        y2 *= factor;
        y3 *= factor;
        y4 *= factor;
        
        update_parameters();
    }
    
    void scale(int divisor) override
    {
        x1 /= divisor; y1 /= divisor;
        x2 /= divisor; y2 /= divisor;
        x3 /= divisor; y3 /= divisor;
        x4 /= divisor; y4 /= divisor;
        
        update_parameters();
    }
    
protected:
    void update_parameters() override
    {
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
