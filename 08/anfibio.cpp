#include <iostream>
using namespace std;
#include "anfibio.h"

VeiculoAnfibio::VeiculoAnfibio(string peso, string passageiros, string marca){
    VeiculoTerrestre("200 cavalos", "PUC-2010", "Automatico");
    VeiculoAquatico("2.5m", "1.60m", "60km/h");
    this -> peso = peso;
    this -> passageiros = passageiros;
    this -> marca = marca;
}

void VeiculoAnfibio::setPeso(string peso){
    this -> peso = peso;
}
void VeiculoAnfibio::setPassageiros(string passageiros){
    this -> passageiros = passageiros;
}
void VeiculoAnfibio::setMarca(string marca){
    this -> marca = marca;
}

string VeiculoAnfibio::getPeso(){
    return peso;
}
string VeiculoAnfibio::getPassageiros(){
    return passageiros;
}
string VeiculoAnfibio::getMarca(){
    return marca;
}

void VeiculoAnfibio::print(){
    cout << "Cor: " << getCor() << endl;
    cout << "Modelo: " << getModelo() << endl;
    cout << "Ano: " << getAno() << endl;
    cout << "Potencia: " << getPotencia() << endl;
    cout << "Placa: " << getPlaca() << endl;
    cout << "Cambio: " << getCambio() << endl;
    cout << "Comprimento: " << getComprimento() << endl;
    cout << "Altura: " << getAltura() << endl;
    cout << "Velocidade: " << getVelocidade() << endl;
    cout << "Peso: " << getPeso() << endl;
    cout << "Passageiros: " << getPassageiros() << endl;
    cout << "Marca: " << getMarca() << endl;
}