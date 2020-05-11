//
// Created by Marius on 5/10/2020.
//

#ifndef PARDUOTUVE_KOMPIUTERIS_H
#define PARDUOTUVE_KOMPIUTERIS_H


#include "Komponentas.h"
#include "Produktas.h"
#include <vector>
#include <string>

class Kompiuteris : public Komponentas{

public:
  void informacija() override;
  void idetiKomponenta(Komponentas *komponentas);
  double kaina() override;
  int unikalusID() override;
  void generuot_unikalu_id();
  Kompiuteris(const std::string &pavadinimas);

private:
  std::string pavadinimas;
  int uid;
  std::vector<Komponentas *> komponentai;
};


#endif //PARDUOTUVE_KOMPIUTERIS_H
