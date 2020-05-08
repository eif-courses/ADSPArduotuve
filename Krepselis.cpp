//
// Created by Marius on 5/8/2020.
//

#include <iostream>
#include "Krepselis.h"

void Krepselis::ideti(Produktas *produktas) {
  produktai.push_back(produktas);
}

void Krepselis::perziureti() {
  std::cout <<"========================KREPSELIS==============================\n";
  for(Produktas *p: produktai){
    std::cout << p->getPavadinimas() << p->getAprasymas() << " "<< p->getKaina()<<" eur\n";
  }
  viso();
}

void Krepselis::viso() {
  double visoKaina;
  for(Produktas *p: produktai){
    visoKaina += p->getKaina();
  }
  std::cout<< "Viso kaina: " << visoKaina<<std::endl;
}

Krepselis::Krepselis(int id) : id(id) {}


