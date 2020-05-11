//
// Created by Marius on 5/11/2020.
//

#ifndef PARDUOTUVE_KOMPONENTAS_H
#define PARDUOTUVE_KOMPONENTAS_H


class Komponentas {
public:
  virtual void informacija() = 0;
  virtual double kaina() = 0;
  virtual int unikalusID() = 0;

};


#endif //PARDUOTUVE_KOMPONENTAS_H
