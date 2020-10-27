#include "Particle.h"

Particle::Particle(double mass, double x_pos, double y_pos, double x_v, double y_v)
    : mass(mass), x_pos(x_pos), y_pos(y_pos), x_v(x_v), y_v(y_v) {}

double Particle::get_x_pos() { return x_pos; }
double Particle::get_y_pos() { return y_pos; }
double Particle::get_x_v() { return x_v; }
double Particle::get_y_v() { return y_v; }
double Particle::get_mass() { return mass; }

void Particle::set_x_v(double v) { x_v = v; }
void Particle::set_y_v(double v) { y_v = v; }

void Particle::collide_elastic(Particle other)
{
  double m1 = mass;
  double m2 = other.get_mass();

  double v1x_final = (((m1 - m2) / (m1 + m2)) * x_v) + ((2 * m2) / (m2 + m1)) * other.get_x_v();
  double v1y_final = (((m1 - m2) / (m1 + m2)) * y_v) + ((2 * m2) / (m2 + m1)) * other.get_y_v();

  double v2x_final = (((m2 - m1) / (m2 + m1)) * other.get_x_v()) + ((2 * m1) / (m1 + m2)) * x_v;
  double v2y_final = (((m2 - m1) / (m2 + m1)) * other.get_y_v()) + ((2 * m1) / (m1 + m2)) * y_v;

  x_v = v1x_final;
  y_v = v1y_final;

  other.set_x_v(v2x_final);
  other.set_y_v(v2y_final);
}
