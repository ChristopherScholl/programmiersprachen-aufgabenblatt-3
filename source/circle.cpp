#include "circle.hpp"
#include "vec2.hpp"
#include "vec2.cpp"
#include "mat2.hpp"
#include "mat2.cpp"

#include <cmath>
#include <iostream>
#include <string>

float Circle2::get_radius() const {
  return radius_;
}

float Circle2::circumference() const {
  return 2 * 3.14159265359* radius_;
}

bool Circle2::is_inside(Vec2 v) const {
  v -= mid_;
  if (sqrt(pow(v.x_, 2) + pow(v.y_, 2)) > radius_) {
    return false;
  }
  else {
    return true;
  }
}

std::string Circle2::print()const {
  return "Name: " + name_ + "\n"
  + "Radius: " + std::to_string(radius_) + "\n"
  + "Mittelpunkt: {" + std::to_string(mid_.x_) + ", " + std::to_string(mid_.y_) + "}\n"
  + "Farbe: {" + std::to_string(color_.r_) + ", " + std::to_string(color_.g_) + ", " + std::to_string(color_.b_) + "}\n";
}

std::ostream& operator <<(std::ostream& os, const Circle2 const& c) {
  return os << c.print();
}

bool operator ==(Circle2& c1, Circle2& c2){
  if (c1.get_radius() == c2.get_radius()) {
    return true;
  }
  else {
    return false;
  }
}

bool operator <(Circle2& c1, Circle2& c2){
  if (c1.get_radius() < c2.get_radius()) {
    return true;
  }
  else {
    return false;
  }
}

bool operator >(Circle2& c1, Circle2& c2){
  if (c1.get_radius() > c2.get_radius()) {
    return true;
  }
  else {
    return false;
  }
}

//void Circle2::draw(Window const& win)const {
//  Vec2 start;
//  Vec2 rad{ 0.0,-radius_ };
//  start += mid_;
//  start += rad;
//
//  for (int i = 0; i < 360; i++) {
//    float stox = (radius_ / 50.0) * cos(6.28318530718 / 360 * i) + start.x_;
//    float stoy = (radius_ / 50.0) * sin(6.28318530718 / 360 * i) + start.y_;
//    Vec2 stop{ stox,stoy };
//    win.draw_line(start.x_, start.y_, stop.x_, stop.y_, color_.r_, color_.g_, color_.b_, 1.0);
//    start = stop;
//  }
//}

//void Circle2::draw(Window const& win, float t)const {
//  Vec2 start;
//  Vec2 rad{ 0.0,-radius_ };
//  start += mid_;
//  start += rad;
//
//  for (int i = 0; i < 360; i++) {
//    float stox = (radius_ / 50.0) * cos(6.28318530718 / 360 * i) + start.x_;
//    float stoy = (radius_ / 50.0) * sin(6.28318530718 / 360 * i) + start.y_;
//    Vec2 stop{ stox,stoy };
//    win.draw_line(start.x_, start.y_, stop.x_, stop.y_, color_.r_, color_.g_, color_.b_, t);
//    start = stop;
//  }
//}
