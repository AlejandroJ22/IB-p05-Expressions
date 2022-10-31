/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro J. Aguiar Pérez
 * @date Oct 31 2022
 * @brief Time decomposition_1
 * 
 * Given a number of seconds n, prints the number of hours, minutes and seconds represented by n.
 * 
 */

#include <iostream>

int main() {
  int segundos{0};
  int minutos{0};
  int horas{0};
  std::cin >> segundos;
  minutos = segundos / 60;
  segundos = segundos % 60;
  horas = minutos / 60;
  minutos = minutos % 60;
  std::cout << horas << " " << minutos << " " << segundos << std::endl;

  return 0;
}
