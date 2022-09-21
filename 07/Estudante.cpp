#include <iostream>
#include <string>
#include "Estudante.h"

using namespace std;

//Construtor
Estudante::Estudante(string nome, string matricula, string curso) {
	this->nome = nome;
	this->matricula = matricula;
	this->curso = curso;
}

//Getters
string Estudante::getNome() { return nome; }
string Estudante::getMatricula() { return matricula; }
string Estudante::getCurso() { return curso; }

//Setters
void Estudante::setNome(string nome) { this->nome = nome; }
void Estudante::setMatricula(string matricula) { this->matricula = matricula; }
void Estudante::setCurso(string curso) { this->curso = curso; }
