#include "Plaszczyzna.hh"

// x 600, y 600 ,z 0
Plaszczyzna::Plaszczyzna(Wektor3D wymiary, int gestosc_siatki, std::string nazwa)
{
    this->nazwa = nazwa;
    double tab[3];
    licz_prostych=0;
    for (int i = -wymiary[0] / 2; i < wymiary[0] / 2; i += gestosc_siatki)
    {
        for (int j = -wymiary[1] / 2; j < wymiary[1] / 2; j += gestosc_siatki)
        {
            tab[0] = i;
            tab[1] = j;

            wierz.push_back(tab);
        }
        licz_prostych++;
    }
}
Wektor3D &Plaszczyzna::operator[](int index)
{
    return wierz[index];
}
Wektor3D Plaszczyzna::operator[](int index) const
{
    return wierz[index];
}

void Plaszczyzna::set_nazwa(std::string nazwa)
{
    this->nazwa = nazwa;
}

std::string Plaszczyzna::get_nazwa() const
{
    return nazwa;
}

void Plaszczyzna::zapisz()
{
      std::fstream plik;

    plik.open(nazwa, std::ios::out);
 for (int i = 0; i < (int)wierz.size(); i ++)
 {
   if(i%licz_prostych==0)
   plik<<std::endl;
   plik<<wierz[i]<<std::endl;
 }
   
    plik.close();
}