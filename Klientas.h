//
// Created by Marius on 5/8/2020.
//

#ifndef PARDUOTUVE_KLIENTAS_H
#define PARDUOTUVE_KLIENTAS_H


#include <string>
#include "Krepselis.h"
#include "Parduotuve.h"

class Klientas {
private:
  int id;
  int balansas = 10000;
  std::string vardas;
  Krepselis *krepselis;
public:
  Klientas(int id, int balansas, const std::string &vardas, Krepselis *krepselis);

  int getId() const;

  int getBalansas() const;

  const std::string &getVardas() const;

  Krepselis *getKrepselis() const;

  void parduotuvesPrekiuSarasas(Parduotuve *parduotuve);




};


#endif //PARDUOTUVE_KLIENTAS_H
