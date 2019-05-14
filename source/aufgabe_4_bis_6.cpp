#include <list>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

int main(int argc, char* argv[])
{
  std::list<int> random_list;
  std::set<int> ergebnis;
  std::map<int, int> haeufigkeit;

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

  std::cout << "Diese Liste beinhaltet " << 101 - ergebnis.size() << " verschiedene Zahlen\n";
  std::cout << "\n";
  std::cout << "Folgende Zahlen beinhaltet sie nicht:\n";
  std::cout << "\n";

  for (int n : ergebnis) {
    std::cout << n << " ";
  }
  
  for (int i = 0; i < 100; i++) {
    int x = random_list.front();
    random_list.pop_front();
    if (haeufigkeit.count(x) != 0) {
      haeufigkeit[x] += 1;
    }
    else {
      haeufigkeit.insert(std::make_pair(x, 1));
    }
  }
  
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Die Zahlen treten in der Liste mit folgenden Haeufigkeiten auf:\n";
  std::cout << "\n";

  for (int i = 0; i < 100; i++) {
    if (haeufigkeit.count(i) != 0) {
      std::cout << i << ":" << haeufigkeit[i] << ' ';
    }
  }

  std::cout << "\n";

}
