#ifndef CUBE_H
#define CUBE_H

#include "shape.h"

class Cube : public Shape
{
public:
    Cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2)
    {
        type = 2;
        
        dimensions = 3;
        points_amount = 8;
        
        std::vector<int> extreme_point_1 {_x1, _y1, _z1 };
        std::vector<int> extreme_point_2 {_x2, _y2, _z2 };
        
        fill_coordinates(extreme_point_1, extreme_point_2);
        
        update_parameters();
    }
    
protected:
    void update_parameters() override
    {
        int x1 = (Coordinates.at(0)).at(0);
        int x2 = (Coordinates.at(points_amount - 1)).at(0);
        int y1 = (Coordinates.at(0)).at(1);
        int y2 = (Coordinates.at(points_amount - 1)).at(1);
        int z1 = (Coordinates.at(0)).at(2);
        int z2 = (Coordinates.at(points_amount - 1)).at(2);
        
        int a = abs(x1 - x2);
        int b = abs(y1 - y2);
        int c = abs(z1 - z2);
        
        square = 2 * a * b + 2 * a * c + 2 * b * c;
        volume = a * b * c;
        radius = 0;
        height = 0;
    }
};

#endif // CUBE_H
