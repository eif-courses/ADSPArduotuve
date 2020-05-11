//
// Created by Marius on 5/10/2020.
//

#include <iostream>
#include <ctime>
#include "Kompiuteris.h"
#include "KonsolesSpalva.h"

Kompiuteris::Kompiuteris(const std::string &pavadinimas) : pavadinimas(pavadinimas) {
  srand (time(NULL));
  generuot_unikalu_id();
}

void Kompiuteris::informacija() {
  KonsolesSpalva::spalva(1);
  std::cout <<pavadinimas<< std::endl;
  for(Komponentas *komponentas: komponentai){
    komponentas->informacija();
  }
  KonsolesSpalva::spalva(22);
  std::cout << "Viso kaina: " << kaina() <<" eur"<< std::endl;
}

void Kompiuteris::idetiKomponenta(Komponentas *komponentas) {
  komponentai.push_back(komponentas);
  KonsolesSpalva::spalva(5);
  std::cout << "Įrenginys sėkmingai įdėtas į kompiuterį!!!"<<std::endl;
}

double Kompiuteris::kaina() {
  double viso = 0.0f;
  for(Komponentas *komponentas: komponentai){
    viso += komponentas->kaina();
  }
  return viso;
}

int Kompiuteris::unikalusID() {
  return rand() % 10000 +1;
}

void Kompiuteris::generuot_unikalu_id() {
  uid = unikalusID();
}



