//
// Created by Marius on 5/10/2020.
//

#ifndef PARDUOTUVE_DETALE_H
#define PARDUOTUVE_DETALE_H


#include "Komponentas.h"
#include <string>
class Detale: public Komponentas {
private:
  std::string pavadinimas;
  std::string aprasymas;
  double komponentoKaina;
  long uid;
public:
  void informacija() override;
  double kaina() override;
  int unikalusID() override;
  void generuoti_unikaluID(int number);
  int gauti_unikalu_id() const;
  std::string gauti_aprasyma();
  Detale(const std::string &pavadinimas, const std::string &aprasymas, double komponentoKaina);
};


#endif //PARDUOTUVE_DETALE_H
