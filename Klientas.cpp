//
// Created by Marius on 5/8/2020.
//

#include <iostream>
#include "Klientas.h"


Klientas::Klientas(int id, int balansas, const std::string &vardas, Krepselis *krepselis) : id(id), balansas(balansas),
                                                                                            vardas(vardas),
                                                                                            krepselis(krepselis) {}

int Klientas::getId() const {
  return id;
}

int Klientas::getBalansas() const {
  return balansas;
}

const std::string &Klientas::getVardas() const {
  return vardas;
}

Krepselis *Klientas::getKrepselis() const {
  return krepselis;
}

void Klientas::parduotuvesPrekiuSarasas(Parduotuve *parduotuve) {
  std::cout << "========================PRODUKTU SARASAS==============================\n";
  int index = 0;
  for (Produktas *p: parduotuve->getProduktai()) {
    std::cout << index++<<". " << p->getPavadinimas() << p->getAprasymas() << " " << p->getKaina() << " eur\n";
  }
  std::cout << "========================================================================\n";

}
