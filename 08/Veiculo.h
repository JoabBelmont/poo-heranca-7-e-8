#include <iostream>
#include <string>

using namespace std;

class Veiculo {
	private:
		int ano;
		float valor;
		string modelo;
	public:
		//Construtor
		Veiculo();

		//Getters
		int getAno();
		float getValor();
		string getModelo();

		//Setters
		void setAno(int ano);
		void setValor(float valor);
		void setModelo(string modelo);
}