class Particle
{
private:
  double x_pos, y_pos, x_v, y_v;
  double mass;

public:
  Particle(double mass, double x_pos, double y_pos, double x_v, double y_v);

  double get_x_pos();
  double get_y_pos();
  double get_x_v();
  double get_y_v();
  double get_mass();

  void set_x_v(double v);
  void set_y_v(double v);

  void collide_elastic(Particle other);

};