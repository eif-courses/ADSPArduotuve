#include <iostream>
#include "Parduotuve.h"
#include "Klientas.h"
#include <windows.h>
#include "KonsolesSpalva.h"
#include "Kompiuteris.h"
#include "Detale.h"





void susirinkPC(){

  std::vector<Detale*> atmintis;

  auto *kompiuteris = new Kompiuteris("Asmeninis kompiuteris");
  auto *kompiuterio_deze = new Kompiuteris("Kompiuterio dėžė");
  auto *isoriniai_prietaisai = new Kompiuteris("Išoriniai prietaisai");
  auto *pagrindine_plokste = new Kompiuteris("Pagrindinė plokštė");

  auto *cpu = new Detale("INTEL I7", "9750K 2.6 Ghz", 305);
  auto *mouse = new Detale("Razor Naga", "50000 DPI", 100);
  auto *hdd = new Detale("Seagate", "2 TB", 180);

  // ==================================== RAM ====================================================
  auto *ram11 = new Detale("ASUS EXTREME", "8GB RAM", 120);
  auto *ram12 = new Detale("CORSAIR TYPHOON", "16GB RAM", 120);
  auto *ram13 = new Detale("KINGSTON", "32GB RAM", 120);

  atmintis.push_back(ram11);
  atmintis.push_back(ram12);
  atmintis.push_back(ram13);

  std::cout << "==================================SUSIRINK KOMPIUTERĮ PATS============================"<<std::endl;

  int pasirinkimas = 0;

  std::cout << "==============================OPERATYVIOSIOS ATMINTIES SĄRAŠAS============================"<<std::endl;
  std::cout <<"Pasirinkite operatyviają atmintį nurodydami UID:" << std::endl;
  for(Detale *d: atmintis){
    std::cout << d->gauti_aprasyma() <<"UID:("<<d->gauti_unikalu_id()<<")" <<std::endl;
  }
  std::cin >> pasirinkimas;
  boolean arRAMPasirinktas = true;

  while(arRAMPasirinktas){
    for(Detale *d: atmintis){
      if(d->gauti_unikalu_id() == pasirinkimas){
        pagrindine_plokste->ideti_komponenta(d);
        arRAMPasirinktas = false;
        pagrindine_plokste->informacija();
        break;
      }
    }
    if(arRAMPasirinktas){
      std::cout << "==============================OPERATYVIOSIOS ATMINTIES SĄRAŠAS============================"<<std::endl;
      std::cout <<"Pasirinkite operatyviają atmintį nurodydami UID:" << std::endl;
      for(Detale *d: atmintis){
        std::cout << d->gauti_aprasyma() <<"UID:("<<d->gauti_unikalu_id()<<")" <<std::endl;
      }
      std::cin >> pasirinkimas;
    }
  }

  kompiuteris->ideti_komponenta(kompiuterio_deze);
  kompiuteris->ideti_komponenta(isoriniai_prietaisai);
  kompiuteris->ideti_komponenta(pagrindine_plokste);

  kompiuteris->informacija();


// ================================================================================================












//  kompiuterio_deze->ideti_komponenta(hdd);
//  pagrindine_plokste->ideti_komponenta(cpu);
//  //pagrindine_plokste->ideti_komponenta(ram);
//  isoriniai_prietaisai->ideti_komponenta(mouse);
//
//  pagrindine_plokste->informacija();


}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  susirinkPC();

































//  Parduotuve *pcbeast = new Parduotuve(9999, "PC Beast");
//  // std::cout << pcbeast->getPavadinimas() << " id:" << pcbeast->getId();
//
//  Produktas *ram33 = new Produktas(2222,
//      120,
//      "ASUS 8 GB",
//      "2666Mhz, 1.2V sparti operatyvioji atmintis");
//  Produktas *ram2 = new Produktas(2222, 200,
//      "DELL 16 GB",
//      "2666Mhz, 1.2V sparti operatyvioji atmintis");
//  Produktas *ram3 = new Produktas(2222,
//      350,
//      "RAZOR 32 GB",
//      "2666Mhz, 1.2V sparti operatyvioji atmintis");
//
//  pcbeast->pridetiProdukta(ram33);
//  pcbeast->pridetiProdukta(ram2);
//  pcbeast->pridetiProdukta(ram3);
//
//
//  Krepselis *krepselis = new Krepselis(9855844);
//
//  Klientas *klientas = new Klientas(1111, 5000, "Marius", krepselis);
//
//
//
//
//
//
//
//
//
//
//  //int in;
////  while(true){
////  klientas->parduotuvesPrekiuSarasas(pcbeast);
////  std::cout << "Nurodykite norimo prekes nr.:"<< std::endl;
////  std::cin >> in;
////
////
////  klientas->getKrepselis()->ideti(pcbeast->gautiPagalIndeksa(in));
////
////  klientas->getKrepselis()->perziureti();
////
////  }
//
//
//
//
//
//
//
//
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
//      std::cin.ignore();
//      std::cout << "Pateikite produkto pavadinima:" << std::endl;
//      std::getline(std::cin, temp);
//      std::cout << "Pateikite produkto aprasyma:" << std::endl;
//      std::getline(std::cin, temp2);
//
//      Produktas *produktas = new Produktas(id1/id2, id2, temp, temp2);
//
//      pcbeast->pridetiProdukta(produktas);
//
//
//    }else if(input == 2){
//      std::cout <<"========================PRODUKTU SARASAS==============================\n";
//      for(Produktas *p: pcbeast->getProduktai()){
//        std::cout << p->getPavadinimas() << " " << p->getAprasymas() << " "<< p->getKaina()<<" eur\n";
//      }
//    }
//    else{
//      exit(-1);
//    }
//
//
//  }
//








  return 0;
}
