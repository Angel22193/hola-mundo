#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Dibujo
{
    private:
    fstream file;

    public:
    Dibujo(string path){
        fileopen(",/assets/kokoa.txt");

    }
    ~Dibujo(){
        file.close();
    }
    void Dibujar(){
        string linea:
        while(getline(file,lina))sl./{
            cout<<linea<<endl;
        }

    }  
    };