#ifndef PLASZCZYZNA_HH
#define PLASZCZYZNA_HH

#include "Wektor3D.hh"
#include "Macierz3x3.hh"
#include <fstream>
#include <vector>

class Plaszczyzna
{
protected:
    std::vector<Wektor3D> wierz;
    std::string nazwa;
   int licz_prostych;
public:
    Plaszczyzna(Wektor3D wymiary=Wektor3D(),int gestosc_siatki=10, std::string nazwa="../datasets/plaszczyzna");

    Wektor3D &operator[](int index);
    Wektor3D operator[](int index) const;

    void set_nazwa(std::string nazwa);
    std::string get_nazwa() const;

    void zapisz();
};

#endif