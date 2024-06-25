#include <format>
#include <iostream>

int main() {
  std::string message = std::format("Hello, {}!", "World");
  std::cout << message << std::endl;
  return 0;
}
