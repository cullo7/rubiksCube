#include <string>
#include <iostream>
#include "side.h"

void Side :: set_color(char color)
{
	middle = color;
	left_edge = color;
	right_edge = color;
	top_edge = color;
	bottom_edge = color;
	top_right_corner = color;
	bottom_right_corner = color;
	top_left_corner = color;
	bottom_left_corner = color;
}

void Side :: set_bottom_edge(char color)
{
	bottom_edge = color;
}

void Side :: C_rotate()
{
	int temp4 = top_edge;
	int temp5 = top_left_corner;

	top_left_corner = bottom_left_corner;
	top_edge = left_edge;

	bottom_left_corner = bottom_right_corner;
	left_edge = bottom_edge;

	bottom_right_corner = top_right_corner;
	bottom_edge = right_edge;

	top_right_corner = temp5;
	right_edge = temp4;
}

void Side :: CC_rotate()
{
	int temp4 = top_edge;
	int temp5 = top_right_corner;

	top_right_corner = bottom_right_corner;
	top_edge = right_edge;

	bottom_right_corner = bottom_left_corner;
	right_edge = bottom_edge;

	bottom_left_corner = top_left_corner;
	bottom_edge = left_edge;

	top_left_corner = temp5;
	left_edge = temp4;
}

Side :: Side()
{
	std::cout<<"constructing "<<name<<" object"<<std::endl;
}

Side :: ~Side(void)
{
	std::cout<<"deconstructing "<<name<<" objec"<<std::endl;
}