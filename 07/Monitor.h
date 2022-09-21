#include <iostream>
#include <string>
#include "Estudante.h"
#include "Funcionario.h"

using namespace std;

class Monitor : public Estudante, Funcionario {
	private:
		string disciplina;
		int cargaHoraria;
	public:
		//Construtor
		Monitor();
		
		//Getters
		string getDisciplina();
		int getCargaHoraria();

		//Setters
		void setDisciplina(string disciplina);
		void setCargaHoraria(int cargaHoraria);

		//Imprimir
		void printMonitor();
};