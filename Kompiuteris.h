//
// Created by Marius on 5/11/2020.
//

#ifndef PARDUOTUVE_KOMPIUTERIS_H
#define PARDUOTUVE_KOMPIUTERIS_H


#include "Komponentas.h"
#include <string>
#include <vector>

class Kompiuteris : public Komponentas{
public:
  void informacija() override;
  double kaina() override;
  int unikalusID() override;
  void generuoti_unikalu_id(int number);
  void ideti_komponenta(Komponentas *komponentas);
  Kompiuteris(const std::string &pavadinimas);

private:
  std::string pavadinimas;
  int uid;
  std::vector<Komponentas*> komponentai;
};


#endif //PARDUOTUVE_KOMPIUTERIS_H
