#define  FORMAS_HPP
#include <iostream>

using namespace std;

class Formas3D
{

private:

    int raio;
    int altura;
    float volume;

public:


    float getVolume();
    void cilindro(int raio,int altura);
    void cone(int raio,int altura);
    void esfera(int raio);

};


// Eu fiz formas 2d e 3d diferentes metodos usando recursos de sala de aula
