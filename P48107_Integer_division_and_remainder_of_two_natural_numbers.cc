/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author alu0101487168@ull.edu.es
  * @date Oct 30 2022
  * @brief Integer resultado_division and remainder of two natural numbers
  * 
  * The program reads two natural numbers a and b, with b > 0, and prints 
  * the integer resultado_division d and the remainder r of a divided by b.
  * By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * 
  */

#include <iostream>

int main() {
  int numerador{0}, denominador{0};
  std::cin >> numerador;
  std::cin >> denominador;
  while (denominador < 0) {
    std::cin >> denominador;
  }
  std::cout << numerador / denominador << " " << numerador % denominador << "\n";

  return 0;
}