#include <iostream>
#include "Parduotuve.h"
#include "Klientas.h"

int main() {

  Parduotuve *pcbeast = new Parduotuve(9999, "PC Beast");
  // std::cout << pcbeast->getPavadinimas() << " id:" << pcbeast->getId();

  Produktas *ram = new Produktas(2222, 120, "ASUS 8 GB", "2666Mhz, 1.2V sparti operatyvioji atmintis");
  Produktas *ram2 = new Produktas(2222, 200, "DELL 16 GB", "2666Mhz, 1.2V sparti operatyvioji atmintis");
  Produktas *ram3 = new Produktas(2222, 350, "RAZOR 32 GB", "2666Mhz, 1.2V sparti operatyvioji atmintis");

  pcbeast->pridetiProdukta(ram);
  pcbeast->pridetiProdukta(ram2);
  pcbeast->pridetiProdukta(ram3);


  Krepselis *krepselis = new Krepselis(9855844);

  Klientas *klientas = new Klientas(1111, 5000, "Marius", krepselis);


  int in;
  while(true){
  klientas->parduotuvesPrekiuSarasas(pcbeast);
  std::cout << "Nurodykite norimo prekes nr.:"<< std::endl;
  std::cin >> in;


  klientas->getKrepselis()->ideti(pcbeast->gautiPagalIndeksa(in));

  klientas->getKrepselis()->perziureti();

  }








//  int input;
//  int id1, id2;
//  std::string temp, temp2;
//
//  while(true) {
//    std::cout << "========================MENIU==============================\n";
//    std::cout << "1. Prideti produkta." << std::endl;
//    std::cout << "2. Perziureti produktus." << std::endl;
//    std::cin >> input;
//    if (input == 1) {
//      std::cout << "Pateikite produkto id:" << std::endl;
//      std::cin >> id1;
//      std::cout << "Pateikite produkto kaina:" << std::endl;
//      std::cin >> id2;
//      std::cout << "Pateikite produkto pavadinima:" << std::endl;
//      std::cin >> temp;
//      std::cout << "Pateikite produkto aprasyma:" << std::endl;
//      std::cin >> temp2;
//
//      Produktas *produktas = new Produktas(id1/id2, id2, temp, temp2);
//
//      pcbeast->pridetiProdukta(produktas);
//
//
//    }else if(input == 2){
//      std::cout <<"========================PRODUKTU SARASAS==============================\n";
//      for(Produktas *p: pcbeast->getProduktai()){
//        std::cout << p->getPavadinimas() << p->getAprasymas() << " "<< p->getKaina()<<" eur\n";
//      }
//    }
//    else{
//      exit(-1);
//    }


 // }









  return 0;
}
