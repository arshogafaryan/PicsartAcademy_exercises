#ifndef FROG_H
#define FROG_H

#include "grass.h"
#include <iostream>

class Frog
{
	private:
		int health;
		static int const max_size = 100;
	public:
		Frog()
		: health(max_size)
		{}
		void breath()
		{
			std::cout << "Frog is breathing" << std::endl;
		}
		void eat(Grass &obj)
		{
			health = max_size;
			std::cout << "Frog is eating. Health is " << health << std::endl;
		}
		void sleep()
		{
			std::cout << "Frog is sleeping" << std::endl;
		}
		void move()
		{
			health -= 25;
			std::cout << "Frog is moving. Health is " << health << std::endl;
		}
};

#endif
