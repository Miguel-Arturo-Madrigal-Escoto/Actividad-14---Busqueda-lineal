#include <iostream>
#include <iomanip>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main()
{
    Arreglo <Computadora> computadoras;

    Computadora c1("Miguel-PC","Windows 7", "Ryzen 5 3600", 12);
    Computadora c2("Arturo-PC","Windows 10", "Ryzen 7 3700x", 16);
    Computadora c3("Miguel-PC","Windows 8", "Ryzen 5 3600x", 12);
    Computadora c4("Miguel-PC","Windows 10", "Ryzen 9 3900x", 32);
    Computadora c5("Cucei-PC","Windows 10", "Ryzen 3 3100", 8);

    computadoras << c1 << c2 << c3 << c4;

    cout << left;
    cout << setw(20) << "Nombre equipo";
    cout << setw(30) << "Sistema operativo";
    cout << setw(20) << "Procesador";
    cout << setw(10) << "Ram";
    cout << endl;

    Computadora *ptr01 = computadoras.buscar(c2);
    if(ptr01 != nullptr){
        cout << *ptr01 << endl;
    }else{
        cout << "No hay coincidencias " << endl << endl;
    }

    Computadora *ptr02 = computadoras.buscar(c5);
    if(ptr02 != nullptr){
        cout << *ptr02;
    }else{
        cout << "No hay coincidencias " << endl << endl;
    }

    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(c1);
    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
           Computadora *c = ptrs[i];
           cout << *c;
        }
    }

    return 0;
}
