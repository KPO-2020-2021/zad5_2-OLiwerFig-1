#ifndef PLASKOWYZ_HH
#define PLASKOWYZ_HH

#include "Bryla.hh"

class Plaskowyz : public Bryla
{

public:

Plaskowyz(Wektor3D srodek=Wektor3D(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/Plaskowyz.dat");
Plaskowyz( Plaskowyz& pr );
  Plaskowyz &operator=(const Plaskowyz &other)
    {
     wymiary=other.wymiary;
 wierz=other.wierz;
  srodek=other.srodek;
  nazwa=other.nazwa;
        return *this;
    }
};







#endif 