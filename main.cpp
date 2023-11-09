#include <iostream>


using namespace std;

#include "class_Tablou.hpp"




int main()
{
   // int dimensiune = setDimensiune();
    Tablou x(3);
    Tablou b(3);
    x.setValues();
    //x.getValues();

   // b.setValues();

    int number = 3;   //variabila cu care adunam/scadem/inmultim

   // b.getValues();

Tablou rez = x * number;

   x+number;
   rez.getValues();


return 0;

}



Tablou operator+(const Tablou& x, int y) {
    Tablou rezultat(x.dimensiune);

    for (int i = 0; i < x.dimensiune; i++) {
        rezultat.tablou[i] = x.tablou[i] + y;
    }

    return rezultat;
}


Tablou operator-(const Tablou& x, int y) {
    Tablou rezultat(x.dimensiune);

    for (int i = 0; i < x.dimensiune; i++) {
        rezultat.tablou[i] = x.tablou[i] - y;
    }

    return rezultat;
}

Tablou operator*(const Tablou& x, int y) {
    Tablou rezultat(x.dimensiune);

    for (int i = 0; i < x.dimensiune; i++) {
        rezultat.tablou[i] = x.tablou[i] * y;
    }

    return rezultat;
}



