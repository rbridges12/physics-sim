#include "Particle.h"
#include <vector>
#include <iostream>

using namespace std;

const int NUM_PARTICLES = 100;

int main()
{
  vector<Particle> particles;

  for (int i = 0; i < NUM_PARTICLES; i++)
  {
    // particles.push_back(Particle(1,1,1,1,1));
    cout << rand() << endl;
  }

  
}

