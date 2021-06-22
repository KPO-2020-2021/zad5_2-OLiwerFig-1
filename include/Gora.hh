#ifndef GORA_HH
#define GORA_HH

#include "Bryla.hh"

class Gora : public Bryla
{

public:

Gora(Wektor3D srodek=Wektor3D(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/Gora.dat");
Gora( Gora& pr );
 Gora &operator=(const Gora &other)
    {
     wymiary=other.wymiary;
 wierz=other.wierz;
  srodek=other.srodek;
  nazwa=other.nazwa;
        return *this;
    }
};







#endif 