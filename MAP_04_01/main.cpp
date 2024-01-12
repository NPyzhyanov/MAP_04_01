#include <iostream>
#include <vector>

#include "shape.h"
#include "line.h"
#include "sqr.h"
#include "cube.h"
#include "circle.h"
#include "cylinder.h"
//#include "transform.h"

int main()
{                                                   //  volume   square
    Line test_line(5, 3, 8, 7);                     //  0       0
    Sqr test_sqr(-10, -10, 30, 15);                 //  0       1000   
    Cube test_cube(8, 7, 6, 10, 10, 10);            //  24      52
    Circle test_circle(-4, 2, 2.52313);             //  0       20
    Cylinder test_cilinder(7, 16, 1.78412, 4.5);    //  44.9998 70.4447
    
    Shape* Figures[] = {&test_line, &test_sqr, &test_cube, &test_circle, &test_cilinder};
    
    std::cout << "Figure\tvolume\tsquare\n";
    for (unsigned int fig = 0; fig < sizeof(Figures) / sizeof(Figures[0]); fig++)
    {
        std::cout << Figures[fig]->getType() << "\t" << Figures[fig]->volume << "\t" << Figures[fig]->square << std::endl;
    }
    
    test_line.scaleX(3);
    test_sqr.scaleY(-2);
    test_cube.scaleZ(5);
    
    std::cout << "\nScaled\n" << std::endl;
    
    std::cout << "Figure\tvolume\tsquare\n";
    for (unsigned int fig = 0; fig < sizeof(Figures) / sizeof(Figures[0]); fig++)
    {
        std::cout << Figures[fig]->getType() << "\t" << Figures[fig]->volume << "\t" << Figures[fig]->square << std::endl;
    }
    
    return 0;
}
