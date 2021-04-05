#include "formas.hpp"


float Formas3D::getVolume(){

    return this->volume;

}

 void  Formas3D::cilindro(int raio ,int altura){

     this->volume = ((3.14 * (raio * raio) )* altura);

     cout<<" Volume do Cilindro "<<volume<<endl;
  }

  void Formas3D::cone(int raio ,int altura){

     this-> volume = ((3.14 * ((raio * raio) * altura))/3);

    cout<<" Volume do Cone: "<<volume<<endl;
  }

  void Formas3D::esfera(int raio){

     this->volume = ((3.14 * (raio * raio * raio)) * 1,334) ;

     cout<<" Volume do Esfera: "<<volume<<endl;


  }

