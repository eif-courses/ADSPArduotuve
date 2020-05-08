//
// Created by Marius on 5/8/2020.
//

#ifndef PARDUOTUVE_PRODUKTAS_H
#define PARDUOTUVE_PRODUKTAS_H


#include <string>

class Produktas {
private:
  int id;
  double kaina;
  std::string pavadinimas;
  std::string aprasymas;
public:
  Produktas(int id, double kaina, const std::string &pavadinimas, const std::string &aprasymas);

  int getId() const;

  double getKaina() const;

  const std::string &getPavadinimas() const;

  const std::string &getAprasymas() const;


};


#endif //PARDUOTUVE_PRODUKTAS_H
