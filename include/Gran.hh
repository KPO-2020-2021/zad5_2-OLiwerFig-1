#ifndef GRAN_HH
#define GRAN_HH

#include "Bryla.hh"

class Gran : public Bryla
{

public:

Gran(Wektor3D srodek=Wektor3D(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/Gran.dat");
Gran( Gran& pr );
 Gran &operator=(const Gran &other)
    {
     wymiary=other.wymiary;
 wierz=other.wierz;
  srodek=other.srodek;
  nazwa=other.nazwa;
        return *this;
    }
};







#endif 