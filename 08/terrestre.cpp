#include <iostream>
using namespace std;
#include "terrestre.h"

VeiculoTerrestre::VeiculoTerrestre(string potencia, string placa, string cambio){
    Veiculo("Azul", "Sedan", "2020");
    this -> potencia = potencia;
    this -> placa = placa;
    this -> cambio = cambio;
}

void VeiculoTerrestre::setPotencia(string potencia){
    this -> potencia = potencia;
} 
void VeiculoTerrestre::setPlaca(string placa){
    this -> placa = placa;
}
void VeiculoTerrestre::setCambio(string cambio){
    this -> cambio = cambio;
}

string VeiculoTerrestre::getPotencia(){
    return potencia;
}
string VeiculoTerrestre::getPlaca(){
    return placa;
}
string VeiculoTerrestre::getCambio(){
    return cambio;
}