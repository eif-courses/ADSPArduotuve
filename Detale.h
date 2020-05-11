//
// Created by Marius on 5/11/2020.
//

#ifndef PARDUOTUVE_DETALE_H
#define PARDUOTUVE_DETALE_H


#include "Komponentas.h"
#include <string>
class Detale : public Komponentas{
private:
  std::string pavadinimas;
  std::string aprasymas;
  double detalesKaina;
  int uid;
public:
  void informacija() override;
  int unikalusID() override;
  double kaina() override;
  void generuoti_unikalu_id(int number);
  int gauti_unikalu_id() const;
  std::string gauti_aprasyma();

  Detale(const std::string &pavadinimas, const std::string &aprasymas, double detalesKaina);
};


#endif //PARDUOTUVE_DETALE_H
