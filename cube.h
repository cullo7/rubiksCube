#ifndef CUBE_H
#define CUBE_H

#include "side.h"

class Cube
{
public:
	Side front;
	Side back;
	Side left;
	Side right;
	Side bottom;
	Side top;

	Cube();
	void C_right_turn();
	void CC_right_turn();
	void C_left_turn();
	void CC_left_turn();
	void C_front_turn();
	void CC_front_turn();
	void C_back_turn();
	void CC_back_turn();
	void C_top_turn();
	void CC_top_turn();
	void C_bottom_turn();
	void CC_bottom_turn();
	void rotate_to_left();
	void rotate_to_right();
	void rotate_to_top();
	void rotate_to_bottom();
	void set();
	void print(Side side);
	void print();
	~Cube();
};

#endif