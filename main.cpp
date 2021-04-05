#include "formas.hpp"
#include <iostream>

// para a formas geo metricas usei  herança
using namespace std ;
class Formas2D
{
  public:
     void setBase(int b)
     {
         base = b;
     }
     void setAltura(int a)
     {
         altura = a;
     }
     void setRaio(float r)
     {
         raio = r;
     }
     void setLado(int l)
     {
        lado = l;
     }
     void setbaseG(int bG)
     {
         baseG = bG;
     }

  protected:

    int base;
    int altura;
    float raio;
    int lado;
    int baseG;

};



class Retangulo: public Formas2D{
  public:
     int getArea()
      {
          return (base * altura);
      }
};

class Triangulo:public Formas2D{

  public:

      int getArea(){
          return ((base * altura)/2);
      }
};

class Circulo:public Formas2D{

  public:

      int getArea(){

          return ((raio * raio)*3.14);
      }
};


class Quadrado: public Formas2D{

  public:

      int getArea(){

          return (lado * lado);
      }
};

class Trapezio: public Formas2D{
public:
    int getArea(){

       return (( baseG + base *(altura)/2));

    }
};

int main (void){

Retangulo Ret;
Triangulo Tri;
Circulo Cir;
Quadrado Qua;
Trapezio Tra;

Ret.setBase(2);
Ret.setAltura(5);
Tri.setBase(5);
Tri.setAltura(6);
Cir.setRaio(20);
Qua.setLado(30);
Tra.setbaseG(3);
Tra.setBase(2);
Tra.setAltura(2);

// parte 3d
Formas3D c;
Formas3D co;
Formas3D esfe;
cout<< "-----PARTE 2D-----"<< endl;
cout<<" Area Retangulo : "<< Ret.getArea() << endl;
cout<<" Area Triangulo : "<< Tri.getArea() << endl;
cout<<" Area Circulo : "<< Cir.getArea() << endl;
cout<<" Area Quadrado : "<< Qua.getArea() << endl;
cout<<" Area Trapezio : "<< Tra.getArea() << endl;
cout<< "-----PARTE 3D-----"<< endl;


// Parte 3D escolhe esse metodo para aprender como faz os dois jeitos entao este modo

c.cilindro(5,10);
co.cone(5,5);
esfe.esfera(10);



return 0;

}
