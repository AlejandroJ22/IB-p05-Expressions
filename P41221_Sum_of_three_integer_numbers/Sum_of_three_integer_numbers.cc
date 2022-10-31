/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro J. Aguiar Pérez
 * @date Oct 31 2022
 * @brief Sum_of_three_integer_numbers
 * 
 * Segun tres numeros introducidos por el usuario se suman y se muestra en
 * pantalla
 * 
 */

#include <iostream>

int main() {
  int primer_numero{0};
  int segundo_numero{0};
  int tercer_numero{0};
  std::cin >> primer_numero;
  std::cin >> segundo_numero;
  std::cin >> tercer_numero;
  std::cout << primer_numero + segundo_numero + tercer_numero << std::endl;

  return 0;
}
