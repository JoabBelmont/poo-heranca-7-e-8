#include <iostream>
#include <string>
#include "Monitor.h"

using namespace std;

//Construtor
Monitor::Monitor() : Estudante(), Funcionario(){ 
	
}

//Getters
string Monitor::getDisciplina() { return this->disciplina; }
int Monitor::getCargaHoraria() { return this->cargaHoraria; }

//Setters
void Monitor::setDisciplina(string disciplina) { this->disciplina = disciplina; }
void Monitor::setCargaHoraria(int cargaHoraria) { this->cargaHoraria = cargaHoraria; }

//Imprimir
void Monitor::printMonitor() {
	cout << "Nome:" << Estudante::getNome() << endl;
	cout << "Matricula:" << Estudante::getMatricula() << endl;
	cout << "Curso: " << Estudante::getCurso() << endl;
	cout << "Salario: " << Funcionario::getSalario() << endl;
	cout << "Turno: " << Funcionario::getTurno() << endl;
	cout << "Disciplina: " << getDisciplina() << endl;
	cout << "Carga Horaria: " << getCargaHoraria() << endl;
}