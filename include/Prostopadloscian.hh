#ifndef PROSTOPADLOSCIAN_HH
#define PROSTOPADLOSCIAN_HH

#include "Bryla.hh"

class Prostopadloscian : public Bryla
{

public:

Prostopadloscian(Wektor3D srodek=Wektor3D(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/prostopadloscian.dat");
Prostopadloscian( Prostopadloscian& pr );
   Prostopadloscian &operator=(const Prostopadloscian &other)
    {
     wymiary=other.wymiary;
 wierz=other.wierz;
  srodek=other.srodek;
  nazwa=other.nazwa;
        return *this;
    }
};







#endif 