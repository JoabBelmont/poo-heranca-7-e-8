#include <iostream>
#include <string>
#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario() {

}

//Getters
string Funcionario::getNome() { return nome; }
float Funcionario::getSalario() { return salario; }
string Funcionario::getTurno() { return turno; }

//Setters
void Funcionario::setNome(string nome) { this->nome = nome; }
void Funcionario::setSalario(float salario) { this->salario = salario; }
void Funcionario::setTurno(string turno) { this->turno = turno; }