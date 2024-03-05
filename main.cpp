#include<iostream>
#include <list>
using namespace std;

#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>


int main(int argc, char const *argv[])
{
    list<Dibujo> dibujo;
    
    Dibujo dibujo1("./assets/kokoa.txt");
    dibujo1.Dibujar();

    //Dibujo dibujo2("./assets/kokoa.txt");
    //dibujo2.Dibujar();

   // Dibujo.push_front(dibujo1);
   // Dibujo.push_front(dibujo2);



    Mascota m1,m2,m3;
   

    list<Mascota> mascotas;
   // mascotas.push_back(m1);
    //mascotas.push_back(m2);
    //mascotas.push_back(m3);

    Alimento alimento(S);
for (auto &&mascota actual  : mascotas)
{
        mascotaActual.Comer(Alimento);
}
for (auto &&mascota actual  : mascotas)
{
       cout<<mascotaActual.Leer Energia(Alimento);
}


    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);

    cout<< " Mascota "<<m1.LeerEnergia()<<endl;
    return 0;
}
