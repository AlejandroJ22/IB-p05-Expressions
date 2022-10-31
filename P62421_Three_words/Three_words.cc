/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Three_words.cc
  * @author alu0101487168@ull.edu.es
  * @date Nov 22 2021
  * @brief reads three words a, b and c, and prints a line with c, b and a in this order.
  */

#include <iostream>

int main() {
  std::string primera_palabra, segunda_palabra, tercera_palabra;
  std::cin >> primera_palabra;
  std::cin >> segunda_palabra;
  std::cin >> tercera_palabra;
  std::cout << tercera_palabra << " " << segunda_palabra << " " << primera_palabra << std::endl;

  return 0;
}
