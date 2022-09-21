#include <iostream>
#include <string>

using namespace std;

class Estudante {
	private:
		string nome;
		string matricula;
		string curso;
	public:
		//Construtor
		Estudante();

		//Getters
		string getNome();
		string getMatricula();
		string getCurso();

		//Setters
		void setNome(string nome);
		void setMatricula(string matricula);
		void setCurso(string curso);
};