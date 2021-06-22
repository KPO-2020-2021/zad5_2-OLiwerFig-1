#include "Graniastoslup6.hh"

Graniastoslup6::Graniastoslup6(Wektor3D srodek, double z, double promien , std::string nazwa )
{
    double tab[] = {0, 0, z};
   wymiary=std::make_shared<Wektor3D> (tab);
    this->nazwa = nazwa;
    this->srodek = srodek;
    Wektor3D punkt;
    for (int i = 0; i < 360; i += 60)
    {
        punkt[0] = promien * cos(i * M_PI / 180);
        punkt[1] = promien * sin(i * M_PI / 180);
        punkt[2] = srodek[2] + (z / 2);
        wierz.push_back(punkt);
        punkt[0] = promien * cos(i * M_PI / 180);
        punkt[1] = promien * sin(i * M_PI / 180);
        punkt[2] = srodek[2] - (z / 2);
        wierz.push_back(punkt);
    }
}