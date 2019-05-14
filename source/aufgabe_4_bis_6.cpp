#include "Circle.hpp"

#include <list>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

int main(int argc, char* argv[])
{
  Circle2 c_1;
  Vec2 mid_2;
  Color color_2{ 0.0, 1.0, 0.0 };
  Circle2 c_2{ "Charles", mid_2, 2.5, color_2 };
  std::set<Circle2> circles;
  circles.insert(c_1);
  circles.insert(c_2);

  std::cout << c_1 << "\n";
  std::cout << c_2 << "\n";

}
