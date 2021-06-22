#include "Macierz3x3.hh"

/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz3x3, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

Macierz3x3 mac_obr_x(double kat)
{
    double rad = kat * M_PI / 180;
    Macierz3x3 Obrotu;
    Obrotu(0, 0) = 1;
    Obrotu(0, 1) = 0;
    Obrotu(0, 2) = 0;

    Obrotu(1, 0) = 0;
    Obrotu(1, 1) = cos(rad);
    Obrotu(1, 2) = -sin(rad);

    Obrotu(2, 0) = 0;
    Obrotu(2, 1) = sin(rad);
    Obrotu(2, 2) = cos(rad);
    return Obrotu;
}
Macierz3x3 mac_obr_y(double kat)
{
    double rad = kat * M_PI / 180;
    Macierz3x3 Obrotu;
    Obrotu(0, 0) = cos(rad);;
    Obrotu(0, 1) = 0;
    Obrotu(0, 2) = sin(rad);

    Obrotu(1, 0) = 0;
    Obrotu(1, 1) = 1;
    Obrotu(1, 2) = 0;

    Obrotu(2, 0) = -sin(rad);
    Obrotu(2, 1) = 0;
    Obrotu(2, 2) = cos(rad);
    return Obrotu;
}
Macierz3x3 mac_obr_z(double kat)
{
    double rad = kat * M_PI / 180;
    Macierz3x3 Obrotu;
    Obrotu(0, 0) = cos(rad);;
    Obrotu(0, 1) = -sin(rad);
    Obrotu(0, 2) = 0;

    Obrotu(1, 0) = sin(rad);
    Obrotu(1, 1) = cos(rad);
    Obrotu(1, 2) = 0;

    Obrotu(2, 0) = 0;
    Obrotu(2, 1) = 0;
    Obrotu(2, 2) = 1;
    return Obrotu;
}