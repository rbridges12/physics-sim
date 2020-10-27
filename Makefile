simulator: simulator.cpp Particle.cpp
	g++ --std=c++11 -Wall -Werror -pedantic -g Particle.cpp simulator.cpp -o simulator.exe