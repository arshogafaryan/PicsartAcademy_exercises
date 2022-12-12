#ifndef WORLD_H
#define WORLD_H

#include <cstdlib>
#include "frog.h"
#include "grass.h"
#include "tree.h"
#include "sun.h"

class World
{
	private:
		Sun s;
		Frog f;
		Tree t;
		Grass g;
		int time;
	public:
		World() 
		:time(1) {}
		void start()
		{
			while (1)
			{
				if (time > 24)
					time = 1;
				if (time <= 20 && time >= 6)
				{	
					std::cout << "Day:[" << time << ":00]" << std::endl;		
					f.breath();
					s.light();
					t.synthesis();
					system("sleep 2");
					
					if (time % 5 == 0)
					{
						f.eat(g);
					}
					else
					{
						f.move();
					}
					system("sleep 2");
				}
				else
				{
					std::cout << "Night:[" << time << ":00]" << std::endl;		
					f.breath();
					f.sleep();
					system("sleep 2");
				}
				++time;
			}
		}
};

#endif

