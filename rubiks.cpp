#include <iostream>
#include "cube.h"
#include "side.h"

int main()
{
	Cube cube;
	cube.set();
	int input;
	cube.print();


	while(1)
	{
		std::cout<<"\nEnter a command from the list\n\n1 - right clockwise\t2 - right counterclockwise\t\t3 - left" 
		<<" clockwise\t\t4 - left counterclockwise\n5 - front clockwise\t6 - front counterclockwise\t\t7 - back clockwise\t\t"
		<<"8 - back counterclockwise\n9 - top clockwise\t10 - top counterclockwise\t\t11 - bottom clockwise\t\t12"
		<<" - bottom counterclockwise\n13 - rotate the cube to the right (making the previously left sidenow the front"
		<< "side)\n14 - rotate cube to the left"<<std::endl;
		std::cin>>input;

		switch(input)
		{
			case 1:
				cube.C_right_turn();
				break;

			case 2:
				cube.CC_right_turn();
				break;

			case 3:
				cube.C_left_turn();
				break;

			case 4:
				cube.CC_left_turn();
				break;

			case 5:
				cube.C_front_turn();
				break;

			case 6:
				cube.CC_front_turn();
				break;

			case 7:
				cube.C_back_turn();
				break;

			case 8:
				cube.CC_back_turn();
				break;

			case 9:
				cube.C_top_turn();
				break;

			case 10:
				cube.CC_top_turn();
				break;

			case 11:
				cube.C_bottom_turn();
				break;

			case 12:
				cube.CC_bottom_turn();
				break;

			case 13:
				cube.rotate_to_right();
				break;

			case 14:
				cube.rotate_to_left();
				break;
		}
		cube.print();
	}
}