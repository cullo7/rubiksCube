#include <iostream>
#include "cube.h"

Cube :: Cube(void)
{
	front.name = "Front";
	back.name = "Back";
	left.name = "Left";
	right.name = "Right";
	bottom.name = "Bottom";
	top.name = "Top";

	std::cout<<"constructing Cube"<<std::endl;
}

void Cube :: C_right_turn() //clockwise rotation of right face of rubiks cube
{
	int temp1 = front.bottom_right_corner;
	int temp2 = front.right_edge;
	int temp3 = front.top_right_corner;

	front.bottom_right_corner = bottom.bottom_right_corner;
	front.right_edge = bottom.right_edge;
	front.top_right_corner = bottom.top_right_corner;

	bottom.bottom_right_corner = back.bottom_right_corner;
	bottom.right_edge = back.right_edge;
	bottom.top_right_corner = back.bottom_right_corner;

	back.bottom_right_corner = top.bottom_right_corner;
	back.right_edge = top.right_edge;
	back.top_right_corner = top.bottom_right_corner;

	top.bottom_right_corner = temp1;
	top.right_edge = temp2;
	top.top_right_corner = temp3;

	right.C_rotate();

}

void Cube :: CC_right_turn()
{
	int temp1 = front.bottom_right_corner;
	int temp2 = front.right_edge;
	int temp3 = front.top_right_corner;

	front.bottom_right_corner = top.bottom_right_corner;
	front.right_edge = top.right_edge;
	front.top_right_corner = top.top_right_corner;

	top.bottom_right_corner = back.bottom_right_corner;
	top.right_edge = back.right_edge;
	top.top_right_corner = back.bottom_right_corner;

	back.bottom_right_corner = bottom.bottom_right_corner;
	back.right_edge = bottom.right_edge;
	back.top_right_corner = bottom.bottom_right_corner;
 
	bottom.bottom_right_corner = temp1;
	bottom.right_edge = temp2;
	bottom.top_right_corner = temp3;
	
	right.CC_rotate();	
}

void Cube :: C_left_turn()
{
	int temp1 = front.bottom_left_corner;
	int temp2 = front.left_edge;
	int temp3 = front.top_left_corner;

	front.bottom_left_corner = top.bottom_left_corner;
	front.left_edge = top.left_edge;
	front.top_left_corner = top.top_left_corner;

	top.bottom_left_corner = back.bottom_left_corner;
	top.left_edge = back.left_edge;
	top.top_left_corner = back.bottom_left_corner;

	back.bottom_left_corner = bottom.bottom_left_corner;
	back.left_edge = bottom.left_edge;
	back.top_left_corner = bottom.bottom_left_corner;
 
	bottom.bottom_left_corner = temp1;
	bottom.left_edge = temp2;
	bottom.top_left_corner = temp3;
	
	left.C_rotate();
}

void Cube :: CC_left_turn() //clockwise rotation of left face of rubiks cube
{
	int temp1 = front.bottom_left_corner;
	int temp2 = front.left_edge;
	int temp3 = front.top_left_corner;

	front.bottom_left_corner = bottom.bottom_left_corner;
	front.left_edge = bottom.left_edge;
	front.top_left_corner = top.bottom_left_corner;

	bottom.bottom_left_corner = back.bottom_left_corner;
	bottom.left_edge = back.left_edge;
	bottom.top_left_corner = back.bottom_left_corner;

	back.bottom_left_corner = top.bottom_left_corner;
	back.left_edge = top.left_edge;
	back.top_left_corner = top.bottom_left_corner;

	top.bottom_left_corner = temp1;
	top.left_edge = temp2;
	top.top_left_corner = temp3;

	left.CC_rotate();
}

void Cube :: C_top_turn() //clockwise rotation of top face of rubiks cube
{
	int temp1 = front.top_right_corner;
	int temp2 = front.top_edge;
	int temp3 = front.top_left_corner;

	front.top_left_corner = right.top_left_corner;
	front.top_edge = right.top_edge;
	front.top_right_corner = right.top_left_corner;

	right.top_left_corner = back.top_left_corner;
	right.top_edge = back.top_edge;
	right.top_right_corner = back.top_left_corner;

	back.top_left_corner = left.top_left_corner;
	back.top_edge = left.top_edge;
	back.top_right_corner = left.top_left_corner;

	left.top_left_corner = temp3;
	left.top_edge = temp2;
	left.top_right_corner = temp1;

	top.C_rotate();
}

void Cube :: CC_top_turn()//counterclockwise rotation of top face of rubiks cube
{
	int temp1 = front.top_right_corner;
	int temp2 = front.top_edge;
	int temp3 = front.top_left_corner;

	front.top_left_corner = left.top_left_corner;
	front.top_edge = left.top_edge;
	front.top_right_corner = left.top_left_corner;

	left.top_left_corner = back.top_left_corner;
	left.top_edge = back.top_edge;
	left.top_right_corner = back.top_left_corner;

	back.top_left_corner = right.top_left_corner;
	back.top_edge = right.top_edge;
	back.top_right_corner = right.top_left_corner;

	right.top_left_corner = temp3;
	right.top_edge = temp2;
	right.top_right_corner = temp1;

	top.CC_rotate();

}

void Cube :: C_bottom_turn()//clockwise rotation of bottom face of rubiks cube
{
	int temp1 = front.bottom_right_corner;
	int temp2 = front.bottom_edge;
	int temp3 = front.bottom_left_corner;

	front.bottom_left_corner = left.bottom_left_corner;
	front.bottom_edge = left.bottom_edge;
	front.bottom_right_corner = left.bottom_left_corner;

	left.bottom_left_corner = back.bottom_left_corner;
	left.bottom_edge = back.bottom_edge;
	left.bottom_right_corner = back.bottom_left_corner;

	back.bottom_left_corner = right.bottom_left_corner;
	back.bottom_edge = right.bottom_edge;
	back.bottom_right_corner = right.bottom_left_corner;

	right.bottom_left_corner = temp3;
	right.bottom_edge = temp2;
	right.bottom_right_corner = temp1;

	bottom.C_rotate();
}

void Cube :: CC_bottom_turn()//counterclockwise rotation of bottom face of rubiks cube
{
	int temp1 = front.bottom_right_corner;
	int temp2 = front.bottom_edge;
	int temp3 = front.bottom_left_corner;

	front.bottom_left_corner = right.bottom_left_corner;
	front.bottom_edge = right.bottom_edge;
	front.bottom_right_corner = right.bottom_right_corner;

	right.bottom_left_corner = back.bottom_left_corner;
	right.bottom_edge = back.bottom_edge;
	right.bottom_right_corner = back.bottom_right_corner;

	back.bottom_left_corner = left.bottom_left_corner;
	back.bottom_edge = left.bottom_edge;
	back.bottom_right_corner = left.bottom_left_corner;

	left.bottom_left_corner = temp3;
	left.bottom_edge = temp2;
	left.bottom_right_corner = temp1;

	bottom.CC_rotate();
}

void Cube :: C_front_turn()//clockwise rotation of front face of rubiks cube
{
	int temp1 = top.bottom_right_corner;
	int temp2 = top.bottom_edge;
	int temp3 = top.bottom_left_corner;

	top.bottom_left_corner = left.bottom_right_corner;
	top.bottom_edge = left.right_edge;
	top.bottom_right_corner = left.top_right_corner;

	left.bottom_right_corner = bottom.top_right_corner;
	left.right_edge = bottom.top_edge;
	left.top_right_corner = bottom.top_left_corner;

	bottom.top_right_corner = right.top_left_corner;
	bottom.top_edge = right.left_edge;
	bottom.top_left_corner = right.bottom_left_corner;

	right.top_left_corner = temp3;
	right.left_edge = temp2;
	right.bottom_left_corner = temp1;

	front.C_rotate();
}

void Cube :: CC_front_turn()//counterclockwise rotation of front face of rubiks cube
{
	int temp1 = top.bottom_right_corner;
	int temp2 = top.bottom_edge;
	int temp3 = top.bottom_left_corner;

	top.bottom_left_corner = right.top_left_corner;
	top.bottom_edge = right.left_edge;
	top.bottom_right_corner = right.bottom_left_corner;

	right.top_left_corner = bottom.top_right_corner;
	right.left_edge = bottom.top_edge;
	right.bottom_left_corner = bottom.top_left_corner;

	bottom.top_right_corner = left.bottom_right_corner;
	bottom.top_edge = left.right_edge;
	bottom.top_left_corner = left.top_right_corner;

	left.bottom_right_corner = temp3;
	left.right_edge = temp2;
	left.top_right_corner = temp1;

	front.CC_rotate();
}

void Cube :: C_back_turn()//clockwise rotation of back face of rubiks cube
{
	int temp1 = top.top_right_corner;
	int temp2 = top.top_edge;
	int temp3 = top.top_left_corner;

	top.top_left_corner = right.top_right_corner;
	top.top_edge = right.right_edge;
	top.top_right_corner = right.bottom_right_corner;

	right.top_right_corner = bottom.bottom_right_corner;
	right.right_edge = bottom.bottom_edge;
	right.bottom_right_corner = bottom.bottom_left_corner;

	bottom.bottom_right_corner = left.bottom_left_corner;
	bottom.bottom_edge = left.left_edge;
	bottom.bottom_left_corner = left.top_left_corner;

	left.bottom_left_corner = temp3;
	left.left_edge = temp2;
	left.top_left_corner = temp1;

	back.C_rotate();
}

void Cube :: CC_back_turn()
{
	int temp1 = top.top_right_corner;
	int temp2 = top.top_edge;
	int temp3 = top.top_left_corner;

	top.top_left_corner = left.bottom_left_corner;
	top.top_edge = left.left_edge;
	top.top_right_corner = left.top_left_corner;

	left.bottom_left_corner = bottom.bottom_right_corner;
	left.left_edge = bottom.bottom_edge;
	left.top_left_corner = bottom.bottom_left_corner;

	bottom.bottom_right_corner = right.top_right_corner;
	bottom.bottom_edge = right.right_edge;
	bottom.bottom_left_corner = right.bottom_right_corner;

	right.top_right_corner = temp3;
	right.right_edge = temp2;
	right.bottom_right_corner = temp1;

	back.CC_rotate();
}

void Cube :: rotate_to_right()
{
	Side temp = front;
	front = left;
	left = back;
	back = right;
	right = temp;
	top.CC_rotate();
	bottom.C_rotate();
}

void Cube :: rotate_to_left()
{
	Side temp = front;
	front = right;
	right = back;
	back = left;
	left = temp;
	top.C_rotate();
	bottom.CC_rotate();
}

void Cube :: rotate_to_top()
{
	Side temp = front;
	front = bottom;
	bottom = back;
	back = top;
	top = temp;
	right.C_rotate();
	left.CC_rotate();
}

void Cube :: rotate_to_bottom()
{
	Side temp = front;
	front = top;
	top = back;
	back = bottom;
	bottom = temp;
	left.C_rotate();
	right.CC_rotate();
}

void Cube :: set() // sets each face to uniform number (color)
{
	front.set_color('W');
	bottom.set_color('G');
	top.set_color('B');
	back.set_color('Y');
	left.set_color('O');
	right.set_color('R');
}

void Cube :: print(Side side)
{
	std :: cout<<side.name<<":\n"<<side.top_left_corner<<"|"<<side.top_edge<<"|"<<side.top_right_corner<<"\n"
	<<side.left_edge<<"|"<<side.middle<<"|"<<side.right_edge<<"\n"
	<<side.bottom_left_corner<<"|"<<side.bottom_edge<<"|"<<side.bottom_right_corner<<"\n"<<std :: endl;
}

void Cube :: print()
{
	print(front);
	print(bottom);
	print(back);
	print(top);
	print(left);
	print(right);
}

Cube :: ~Cube(void)
{
	std::cout<<"deconstructing cube"<<std::endl;
}