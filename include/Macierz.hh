#ifndef MACIERZ_HH
#define MACIERZ_HH


#include <iostream>
#include "Wektor.hh"
#include <cmath>
using namespace std;

template <int Wymiar>
class Macierz{

  double Mac[Wymiar][Wymiar];
  public:

Macierz();
double operator()(int index_x, int index_y) const;
double &operator()(int index_x, int index_y);
Wektor<Wymiar> operator *( Wektor<Wymiar> wsp);
Macierz<Wymiar> operator *( Macierz<Wymiar> wsp);
};

template <int Wymiar>
Macierz<Wymiar> ::Macierz()
{
  for(int i = 0; i < Wymiar; ++i)
  {
    for(int j = 0; j < Wymiar; ++j)
    {
      if(i==j)
      {
        Mac[i][j]=1;
      }
      else
      {
        Mac[i][j]=0;
      }
    }
  }
}

template <int Wymiar>
double Macierz<Wymiar> ::operator()(int index_x, int index_y) const {
    if (index_x > Wymiar|| index_x < 0 || index_y > Wymiar || index_y < 0) 
    {
        std::cerr << "Indeks poza skala" << std::endl;
        exit(1);
    }
    return Mac[index_x][index_y]; }

template <int Wymiar>
double &Macierz<Wymiar> ::operator()(int index_x, int index_y) {
    if (index_x > Wymiar || index_x < 0 || index_y > Wymiar || index_y < 0) 
    {
        std::cerr << "Indeks poza skala" << std::endl;
        exit(1);
    }
    return Mac[index_x][index_y]; }

template <int Wymiar>
Wektor<Wymiar> Macierz<Wymiar> ::operator *( Wektor<Wymiar> wsp) {
  Wektor<Wymiar> Wynik;

  for(int i = 0; i < Wymiar; ++i)
  {
    for(int j = 0; j < Wymiar; ++j)
    {
      Wynik[i] += Mac[i][j] * wsp[j];
    }
  }
    return Wynik; }
template <int Wymiar>
Macierz<Wymiar> Macierz<Wymiar>::operator *( Macierz<Wymiar> wsp) {
  Macierz<Wymiar> Wynik;

  for(int i = 0; i < Wymiar; ++i)
  {
    for(int j = 0; j < Wymiar; ++j)
    {
      Wynik(i,j) =0;
         for(int k = 0; k < Wymiar; k++ ) Wynik(i,j) += Mac [ i ][ k ] * wsp(k,j) ;
    }
  }
    return Wynik; }

template <int Wymiar>
inline
std::ostream& operator << (std::ostream &Strm, const Macierz<Wymiar> &wsp) {
   for(int i = 0; i < Wymiar; ++i)
  {
    for(int j = 0; j < Wymiar; ++j)
    {
     cout<<wsp(i,j)<<" ";
    }
         cout<<endl;
  }
  return Strm;  }

#endif
