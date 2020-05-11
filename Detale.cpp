//
// Created by Marius on 5/11/2020.
//

#include <iostream>
#include "Detale.h"
#include "KonsolesSpalva.h"

Detale::Detale(const std::string &pavadinimas, const std::string &aprasymas, double detalesKaina) : pavadinimas(
    pavadinimas), aprasymas(aprasymas), detalesKaina(detalesKaina) {
  generuoti_unikalu_id(detalesKaina);
}

void Detale::informacija() {
  KonsolesSpalva::spalva(4);
  std::cout << "==============================================================="<<std::endl;
  std::cout << pavadinimas << " " << detalesKaina <<" eur\nAprašymas" << aprasymas <<std::endl;
}

int Detale::unikalusID() {
  return rand() % 10000 + 1;
}

void Detale::generuoti_unikalu_id(int number) {
  uid = unikalusID() + number;
}

double Detale::kaina() {
  return detalesKaina;
}

int Detale::gauti_unikalu_id() const {
  return uid;
}

std::string Detale::gauti_aprasyma() {
  return aprasymas;
}
