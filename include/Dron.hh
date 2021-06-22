#ifndef DRON_HH
#define DRON_HH

#include "Prostopadloscian.hh"
#include "Graniastoslup6.hh"
#include "lacze_do_gnuplota.hh"
#include <unistd.h> // biblioteka dla usleep
#define CZAS 20000

class Dron
{
    std::vector<Wektor3D> droga_drona;
    PzG::LaczeDoGNUPlota &Lacze;
    Prostopadloscian orginal;
    Prostopadloscian kopia;
    Graniastoslup6 org_wir[4];
    Graniastoslup6 kopia_wir[4];
    Macierz3x3 obr;
    Wektor3D droga;
    double kat;
    int id; 
public:

  void usun();
  
  int get_id(){return id; }
  Dron(int id,PzG::LaczeDoGNUPlota &Lacze,Wektor3D pozycja);
  void unoszenie(double droga);
  void przesun(double droga);
  void obrot(double kat); // kont podajemy w stopniach
  void obrot_rotrow(); // kont podajemy w stopniach
  void zapisz();
  void sterowanie();
  void okresl_droge(double droga);
};

#endif
