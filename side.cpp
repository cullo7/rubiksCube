#include <string>
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

/*Side :: Side(std::string face)
{
	name = face;
}*/