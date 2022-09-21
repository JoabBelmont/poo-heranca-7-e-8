#include <iostream>
#include <string>

using namespace std;

class Funcionario {
	private:
		string nome;
		float salario;
		string turno;
		int RG;
	public:
		//Construtor
		Funcionario();
		
		//Getters
		string getNome();
		float getSalario();
		string getTurno();

		//Setters
		void setNome(string nome);
		void setSalario(float salario);
		void setTurno(string turno);
};