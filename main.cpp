#include<iostream>
using namespace std;
#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>

int main(int argc, char const *argv[])
{
    Dibujo dibujo("./assets/kokoa.txt");

    dibujo.Dibujar();
    Mascota m1;
    Mascota m2;
    Mascota m3;

    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);

    cout<< " Mascota "<<m1.LeerEnergia()<<endl;
    return 0;
}
