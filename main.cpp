#include <iostream>
#include "Parduotuve.h"
#include "Klientas.h"
#include "Kompiuteris.h"
#include "Detale.h"
#include <windows.h>




std::vector<Kompiuteris*> surinktiKompiuteri(){

  std::vector<Detale*> atmintis;
  std::vector<Detale*> procesorius;
  std::vector<Detale*> vaizdo_plokste;


  Detale *ram1 = new Detale(
      "CORSAIR EXTREME",
      "8GB RAM",
      150);

  Detale *ram2 = new Detale(
      "ASUS TURBO",
      "16GB RAM",
      250);

  Detale *ram3 = new Detale(
      "KINGSTON A9000 SUPER",
      "32GB RAM",
      450);

  atmintis.push_back(ram1);
  atmintis.push_back(ram2);
  atmintis.push_back(ram3);



  std::cout<< "Susirink kompiuterį pats" << std::endl;

  Kompiuteris *kompiuteris = new Kompiuteris("Greitas kompiuteris");
  Kompiuteris *isoriniai_prietaisai = new Kompiuteris("Išoriniai prietaisai");
  Kompiuteris *pagrindine_plokste = new Kompiuteris("Pagrindinė plokštė");
  Kompiuteris *kompiuterio_deze = new Kompiuteris("Kompiuterio dėžė");

  int inRAM = 0;
  std::cout<< "Pasirinkite komponentus savo svajonių kompiuteriui:" << std::endl;

  std::cout << "==============================SĄRAŠAS====================================="<<std::endl;
  for(Detale *d: atmintis){
    std::cout << "Pasirinkite operatyviają atmintį nurodydami UID: "
                 << d->gauti_aprasyma() <<"UID:("<< d->gauti_unikalu_id() <<")"<< std::endl;
  }
  std::cin >> inRAM;
  boolean ramParinktas = true;

  while(ramParinktas) {

    for (Detale *detale: atmintis) {

      //std::cout << detale->gauti_unikalu_id() <<","<< inRAM << std::endl;

      if (detale->gauti_unikalu_id() == inRAM) {
        pagrindine_plokste->idetiKomponenta(detale);
        ramParinktas = false;
        break;
      }
    }
    if(ramParinktas){
      std::cout << "==============================SĄRAŠAS====================================="<<std::endl;
      for(Detale *d: atmintis){
        std::cout << "Pasirinkite operatyviają atmintį nurodydami UID: "
                  << d->gauti_aprasyma() <<"UID:("<< d->gauti_unikalu_id() <<")"<< std::endl;
      }      std::cin >> inRAM;
    }
  }
  std::string inCPU = "";

  std::cout << "Pasirinkite procesorių Intel: I3, I5 I7" << std::endl;
  std::cin >> inCPU;
  while(true) {
    if(inCPU == "I3" || inCPU == "I5" || inCPU == "I7"){
      Detale *procesorius = new Detale(
          "Intel "+inCPU,
          "8 cores 16 Threads",
          400);
      pagrindine_plokste->idetiKomponenta(procesorius);
      break;
    }else{
      std::cout << "Pasirinkite procesorių Intel: I3, I5 I7" << std::endl;
      std::cin >> inCPU;
    }
  }


//  Detale *vaizdo_plokste = new Detale(
//      "Geforce GTX 2070 SUPER",
//      "64 Bit MAX-Q",
//      450);
//
//  pagrindine_plokste->idetiKomponenta(vaizdo_plokste);

  Detale *pele = new Detale(
      "Razer Naga 250",
      "50K DPI Sensitive",
      250);

  Detale *klaviatura = new Detale(
      "Logitech x200",
      "Shiny technology",
      150);


  Detale *hdd = new Detale(
      "Seagate",
      "2 TB hybrid",
      350
      );

  kompiuterio_deze->idetiKomponenta(hdd);

  isoriniai_prietaisai->idetiKomponenta(klaviatura);
  isoriniai_prietaisai->idetiKomponenta(pele);

  kompiuteris->idetiKomponenta(kompiuterio_deze);
  kompiuteris->idetiKomponenta(pagrindine_plokste);
  kompiuteris->idetiKomponenta(isoriniai_prietaisai);


  kompiuteris->informacija();

  std::vector<Kompiuteris*> dalimis;
  dalimis.push_back(kompiuteris);
  dalimis.push_back(isoriniai_prietaisai);
  dalimis.push_back(kompiuterio_deze);
  dalimis.push_back(pagrindine_plokste);

  return dalimis;
}


int main() {


  SetConsoleOutputCP(CP_UTF8);

  Parduotuve *pcbeast = new Parduotuve(9999, "PC Beast");
  // std::cout << pcbeast->getPavadinimas() << " id:" << pcbeast->getId();

  Produktas *ram = new Produktas(2222,
      120,
      "ASUS 8 GB",
      "2666Mhz, 1.2V sparti operatyvioji atmintis");
  Produktas *ram2 = new Produktas(2222, 200,
      "DELL 16 GB",
      "2666Mhz, 1.2V sparti operatyvioji atmintis");
  Produktas *ram3 = new Produktas(2222,
      350,
      "RAZOR 32 GB",
      "2666Mhz, 1.2V sparti operatyvioji atmintis");

  pcbeast->pridetiProdukta(ram);
  pcbeast->pridetiProdukta(ram2);
  pcbeast->pridetiProdukta(ram3);


  Krepselis *krepselis = new Krepselis(9855844);

  Klientas *klientas = new Klientas(1111, 5000, "Marius", krepselis);


  surinktiKompiuteri();







  //int in;
//  while(true){
//  klientas->parduotuvesPrekiuSarasas(pcbeast);
//  std::cout << "Nurodykite norimo prekes nr.:"<< std::endl;
//  std::cin >> in;
//
//
//  klientas->getKrepselis()->ideti(pcbeast->gautiPagalIndeksa(in));
//
//  klientas->getKrepselis()->perziureti();
//
//  }








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


  //}









  return 0;
}
