/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro J. Aguiar Pérez
 * @date Oct 30 2022
 * @brief arithmetic_operators.cc
 * 
 * Muestra varias operaciones aritmeticas y de comparacion con unas variables ya declaradas
 * 
 */

#include <iostream>

int main() {
  int operando_1{7}, operando_2{3};
  std::cout << operando_1 << " + " << operando_2 << " = " << operando_1 + operando_2 << "\n";
  std::cout << operando_1 << " - " << operando_2 << " = " << operando_1 - operando_2 << "\n";
  std::cout << operando_1 << " * " << operando_2 << " = " << operando_1 * operando_2 << "\n";
  std::cout << operando_1 << " / " << operando_2 << " = " << operando_1 / operando_2 << "\n";
  std::cout << operando_1 << " % " << operando_2 << " = " << operando_1 % operando_2 << "\n";
  std::cout << operando_1 << " < " << operando_2 << " ? " << (operando_1 < operando_2) << "\n";
  std::cout << operando_1 << " > " << operando_2 << " ? " << (operando_1 > operando_2) << "\n";
  std::cout << operando_1 << " == " << operando_2 << " ? " << (operando_1 == operando_2) << "\n";
  std::cout << operando_1 << " != " << operando_2 << " ? " << (operando_1 != operando_2) << "\n";

  return 0;
}