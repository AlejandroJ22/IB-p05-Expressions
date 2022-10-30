/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro J. Aguiar Pérez
 * @date Oct 30 2022
 * @brief boolean_operators.cc
 * 
 * Muestra una tabla de verdad
 * 
 */

#include <iostream>

void AND(bool operando_1, bool operando_2) {
  std::cout << operando_1 * operando_2 << "\n";
}

void OR(bool operando_1, bool operando_2) {
  std::cout << static_cast<bool>(operando_1 + operando_2) << "\n";  // usando static_cast el resultado es de tipo booleano y ya no da 2(operacion aritmetica)
}

void NOT(bool operando) {
  std::cout << !operando << "\n";
}

int main() {
  const bool bit{0};
  std::cout << "AND" << "\n";
  AND(bit, bit);   //00
  AND(bit, !bit);  //01
  AND(!bit, bit);  //10
  AND(!bit, !bit); //11
  std::cout << "OR" << "\n";
  OR(bit, bit);    //00
  OR(bit, !bit);   //01
  OR(!bit, bit);   //10
  OR(!bit, !bit);  //11
  std::cout << "NOT" << "\n";
  NOT(bit);        //0
  NOT(!bit);       //1

  return 0;
}