#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>
Shape::Shape(int _type, int _x1, int _y1, int _z1, int _x2, int _y2, int _z2)
{
	type = _type;
	// заполняем координаты фигуры
	switch (type)
	{
	case line:
		x1 = _x1; y1 = _y1;
		x2 = _x2; y2 = _y2;
		break;
	case sqr:
		x1 = _x1; y1 = _y1;
		x2 = _x2; y2 = _y2;
		x3 = _x1; y3 = _y2;
		x4 = _x2; y4 = _y1;
		break;
	case cube:
		x1 = _x1; y1 = _y1; z1 = _z1;
		x2 = _x2; y2 = _y2; z2 = _z2;
		x3 = _x1; y3 = _y2; z3 = _z2;
		x4 = _x1; y4 = _y1; z4 = _z2;
		x5 = _x2; y5 = _y1; z5 = _z2;
		x6 = _x2; y6 = _y1; z6 = _z1; 
		x7 = _x2; y7 = _y2; z7 = _z1;
		x8 = _x1; y8 = _y2; z8 = _z1;
		break;
	default:
		break;
	}
	
	// стороны фигуры
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	int c = abs(z1 - z2);
	// считаем площадь фигуры
	switch (type)
	{
	case line:
		square = 0;
		break;
	case sqr:
		square = a * b;
		break;
	case cube:
		square = 2 * a * b + 2 * a * c + 2 * b * c;
		break;
	default:
		break;
	}

	// считаем объем фигуры
	switch (type)
	{
	case line:
		volume = 0;
		break;
	case sqr:
		volume = 0;
		break;
	case cube:
		volume = a * b * c;
		break;
	default:
		break;
	}

}

Shape::Shape(int _type, int _x1, int _y1, double R, double H)
{
    type = _type;
	// заполн¤ем координаты фигуры
	switch (type)
	{
	case circle:
		x1 = _x1; y1 = _y1;
		radius = R;
		break;
	case cylinder:
		x1 = _x1; y1 = _y1;
		radius = R;
		height = H;
		break;
	default:
		break;
	}

	// считаем площадь фигуры
	switch (type)
	{
	case circle:
		square = M_PI * R * R;
		break;
	case cylinder:
		square = M_PI * R * R + 2 * R * height;
		break;
	default:
		break;
	}

	// считаем объем фигуры
	switch (type)
	{
	case circle:
		volume = 0;
		break;
	case cylinder:
		volume = M_PI * R * R * height;
		break;
	default:
		break;
	}

}
