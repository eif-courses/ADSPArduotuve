//
// Created by Marius on 5/8/2020.
//

#include "Produktas.h"

Produktas::Produktas(int id, double kaina, const std::string &pavadinimas, const std::string &aprasymas) : id(id),
                                                                                                           kaina(kaina),
                                                                                                           pavadinimas(
                                                                                                               pavadinimas),
                                                                                                           aprasymas(
                                                                                                               aprasymas) {}

int Produktas::getId() const {
  return id;
}


const std::string &Produktas::getPavadinimas() const {
  return pavadinimas;
}

const std::string &Produktas::getAprasymas() const {
  return aprasymas;
}

double Produktas::getKaina() const {
  return kaina;
}
