#ifndef MAMIFERO
#define MAMIFERO

#include <iostream>
#include <string>

// Classe Mamiferos
class Mamifero{
	private:
		std::string _nome;
		std::string _cor;
		int         _idade;
		std::string _sexo;

	public:
		Mamifero(std::string nome, std::string cor, int idade, std::string sexo);
		void setNome(std::string nome);
		void setCor(std::string cor);
		void setIdade(int idade);
		void setSexo(std::string sexo);

		std::string getNome() const;
		std::string getCor() const;
		int getIdade() const;
		std::string getSexo() const;
};
#endif          // MAMIFERO
