//
// Created by Marius on 5/10/2020.
//

#include <iostream>
#include <ctime>
#include "Detale.h"
#include "KonsolesSpalva.h"

Detale::Detale(const std::string &pavadinimas, const std::string &aprasymas, double komponentoKaina) : pavadinimas(
    pavadinimas), aprasymas(aprasymas), komponentoKaina(komponentoKaina) {
  generuoti_unikaluID((int) komponentoKaina);
}

void Detale::informacija() {
  KonsolesSpalva::spalva(4);
  std::cout<<"========================================================="<<std::endl;
  std::cout<< pavadinimas<< " " << komponentoKaina <<
  " eur\nAprašymas:" << aprasymas << std::endl;

}

double Detale::kaina() {
  return komponentoKaina;
}

int Detale::unikalusID() {
  return rand() % 10000 + 1;
}

void Detale::generuoti_unikaluID(int number) {
  uid = unikalusID() + number;
}

int Detale::gauti_unikalu_id() const{
  return uid;
}

std::string Detale::gauti_aprasyma() {
  return aprasymas;
}




