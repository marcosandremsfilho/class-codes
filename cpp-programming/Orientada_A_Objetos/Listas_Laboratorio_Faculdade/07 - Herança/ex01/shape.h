#include <iostream>

using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class shape
{
protected:
  float _altura, _largura;
public:
  shape(float altura = 0.0, float largura = 0.0) : _altura{altura}, _largura{largura} { }
  ~shape() { }

  friend ostream& operator<<(ostream& out, const shape& s);
  friend istream& operator>>(istream& in, shape& s);
};

#endif

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public shape
{
private:
  float _area;
public:
  Triangle(float altura, float base) : shape{altura, base} { }
  ~Triangle() { }

  float area()
  {
    _area = (_altura * _largura)/2;

    return _area;
  }
};

#endif

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public shape
{
private:
  float _area;
public:
  Rectangle(float altura, float base) : shape{altura, base} { }
  ~Rectangle() { }

  float area()
  {
    _area = (_altura * _largura);

    return _area;
  }
};

#endif
