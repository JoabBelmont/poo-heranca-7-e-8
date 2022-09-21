#include <iostream>
using namespace std;

#include "aquatico.h"

VeiculoAquatico::VeiculoAquatico(string comprimento, string altura, string velocidade){
    Veiculo("Azul", "Sedan", "2020");
    this -> comprimento = comprimento;
    this -> altura = altura;
    this -> velocidade = velocidade;
}

void VeiculoAquatico::setComprimento(string comprimento){
    this -> comprimento = comprimento;
}
void VeiculoAquatico::setAltura(string altura){
    this -> altura = altura;
}
void VeiculoAquatico::setVelocidade(string velocidade){
    this -> velocidade = velocidade;
}

string VeiculoAquatico::getComprimento(){
    return comprimento;
}
string VeiculoAquatico::getAltura(){
    return altura;
}
string VeiculoAquatico::getVelocidade(){
    return velocidade;
}
