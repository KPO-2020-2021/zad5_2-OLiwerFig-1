#include "Scena.hh"

using namespace std;

int main()
{
     srand(time(NULL));
     Wektor3D wek;
   Scena s;
   wek.informacje();
       while (s.interfejs())
       {
            s.rysuj();
            wek.informacje();
       }
}
