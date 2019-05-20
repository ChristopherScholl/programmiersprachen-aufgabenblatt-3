#include <algorithm>

template<typename T>

T filter(T const& container, bool const& praedikat) {
  container.erase(std::remove_if(container.begin(), container.end(), !praedikat), container.end());
  return container;
}

