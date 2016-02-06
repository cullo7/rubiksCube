#ifndef SIDE_H
#define SIDE_H
#include <string>

class Side
{
public:
	Side();
	std::string name;
	char middle;
	char left_edge;
	char right_edge;
	char top_edge;
	char bottom_edge;
	char top_right_corner;
	char bottom_right_corner;
	char top_left_corner;
	char bottom_left_corner;
	void set_color(char color);
	void set_bottom_edge(char color);
	void C_rotate();
	void CC_rotate();
	~Side();
};

#endif