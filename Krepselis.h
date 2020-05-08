//
// Created by Marius on 5/8/2020.
//

#ifndef PARDUOTUVE_KREPSELIS_H
#define PARDUOTUVE_KREPSELIS_H


#include <vector>
#include "Produktas.h"

class Krepselis {
private:
  int id;
  std::vector<Produktas*> produktai;
public:
  void ideti(Produktas* produktas);
  void perziureti();
  void viso();

  Krepselis(int id);
};


#endif //PARDUOTUVE_KREPSELIS_H
