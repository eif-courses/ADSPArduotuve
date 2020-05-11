//
// Created by Marius on 5/11/2020.
//

#include <iostream>
#include "Kompiuteris.h"
#include "KonsolesSpalva.h"

Kompiuteris::Kompiuteris(const std::string &pavadinimas) : pavadinimas(pavadinimas) {
  generuoti_unikalu_id(0);
}

void Kompiuteris::informacija() {
  KonsolesSpalva::spalva(1);
  std::cout << "--------------------------------------------------" << std::endl;
  std::cout << pavadinimas << std::endl;
  std::cout << "--------------------------------------------------" << std::endl;
  for(Komponentas *komponentas: komponentai){
    komponentas->informacija();
  }
  KonsolesSpalva::spalva(22);
  std::cout <<"Viso kaina: " << kaina() << " eur" << std::endl;

}

void Kompiuteris::ideti_komponenta(Komponentas *komponentas) {
  komponentai.push_back(komponentas);
}

double Kompiuteris::kaina() {
  double viso = 0.0;
  for(Komponentas *k: komponentai){
    viso += k->kaina();
  }
  return viso;
}

int Kompiuteris::unikalusID() {
  return rand() % 10000 + 1; // 0 - 10000 + number
}

void Kompiuteris::generuoti_unikalu_id(int number) {
   uid = unikalusID() + number;
}
