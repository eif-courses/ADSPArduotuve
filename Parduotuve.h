//
// Created by Marius on 5/8/2020.
//

#include <string>
#include <vector>
#include "Produktas.h"

#ifndef PARDUOTUVE_PARDUOTUVE_H
#define PARDUOTUVE_PARDUOTUVE_H


class Parduotuve {
private:
  int id;
  std::string pavadinimas;
  std::vector<Produktas*> produktai;
public:
  Parduotuve(int id, const std::string &pavadinimas);


  Produktas *gautiPagalIndeksa(int indeksas);

  virtual ~Parduotuve();

  int getId() const;

  const std::string &getPavadinimas() const;

  const std::vector<Produktas *> &getProduktai() const;

  void pridetiProdukta(Produktas *produktas);


};


#endif //PARDUOTUVE_PARDUOTUVE_H
