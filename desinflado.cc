/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro J. Aguiar Pérez
 * @date Oct 30 2022
 * @brief desinflado.cc
 * 
 * Al introducir una letra mayuscula, muestra esa misma letra en minuscula por pantalla
 * 
 */

#include <iostream>

int main() {
  char letra{0};
  const int diferencia_myus_minus{32};
  std::cout << "Entrada" << "\n" << "  ";
  std::cin >> letra;
  letra = letra + diferencia_myus_minus;
  if (letra > 65 || letra < 122) { // comprobar que sea una letra del abecedario y no otro cualquier caracter
    std::cout << "Salida" << "\n" << "  " << letra << "\n";
  }
  
  return 0;
}