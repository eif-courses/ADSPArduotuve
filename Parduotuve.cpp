//
// Created by Marius on 5/8/2020.
//

#include <iostream>
#include "Parduotuve.h"

Parduotuve::Parduotuve(int id, const std::string &pavadinimas) : id(id), pavadinimas(pavadinimas) {}

int Parduotuve::getId() const {
  return id;
}

const std::string &Parduotuve::getPavadinimas() const {
  return pavadinimas;
}

const std::vector<Produktas *> &Parduotuve::getProduktai() const {
  return produktai;
}

Parduotuve::~Parduotuve() {
  std::cout << "\ndestruktorius iskviestas!";
}

void Parduotuve::pridetiProdukta(Produktas *produktas) {
  this->produktai.push_back(produktas);
}

Produktas *Parduotuve::gautiPagalIndeksa(int indeksas) {
  return produktai[indeksas];
}