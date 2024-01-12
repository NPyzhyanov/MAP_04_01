#pragma once

class Shape
{
public:
	static const int line = 0;
	static const int sqr = 1;
	static const int cube = 2;
	static const int circle = 3;
	static const int cylinder = 4;
	Shape() = default;
    
	int getType() { return type; }

	int type;
    
	double volume;
	double square;
	double height;
	double radius;
};
