#ifndef SIDE_H
#define SIDE_H
#include <string>

class Side
{
public:
	std::string name;
	int middle;
	int left_edge;
	int right_edge;
	int top_edge;
	int bottom_edge;
	int top_right_corner;
	int bottom_right_corner;
	int top_left_corner;
	int bottom_left_corner;
	void set_color(char color);
	//Side(std::string name);
};

#endif