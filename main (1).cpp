#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    // NELEMENTS rosszul van leírva
    std::cout << '1-100 ertekek duplazasa' //Hiányzik egy pontosvessző
    for (int i = 0;) //Hiányzik a ciklus feltételének a megadása
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //ciklus feltételének értéke mindig hamis, így a ciklus soha nem fut le.
    {
        std::cout << "Ertek:" //Hiányzik egy pontosvessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //A változót inicializálni kell
    for (int i = 0; i < N_ELEMENTS, i++) //A vessző helyett pontosvesszőt kell használni
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
