#include <list>
#include <set>
#include <iostream>
#include <algorithm>

int main(int argc, char* argv[])
{
  std::list<int> random_list;
  std::set<int> ergebnis;

  for (int i = 0; i < 101; i++) {
    ergebnis.insert(i);
  }

  for (int i = 0; i < 100; i++) {
    int x = rand() % 101;
    random_list.push_back(x);
    bool is_in = ergebnis.find(x) != ergebnis.end();
    if (is_in) {
      ergebnis.erase(x);
    }
  }

  for (int n : ergebnis) {
    std::cout << n << '\n';
  }
  std::cout << "Dies Liste beinhaltet " << ergebnis.size() << " verschiedene Zahlen\n";
}
