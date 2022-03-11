#include <iostream>
#include "utils.h"

int main() {
  std::cout << "Welcome to \033[96;1mC++\033[0m!" << std::endl;
  std::cout << MyAdd(1, 2) << std::endl;
}
