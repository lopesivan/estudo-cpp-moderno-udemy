#include "Mamifero.h"

Mamifero::Mamifero(
		std::string nome,
		std::string cor,
		int idade,
		std::string sexo)
{
	setNome(nome);
	setCor(cor);
	setIdade(idade);
	setSexo(sexo);
}

void Mamifero::setNome(std::string nome)
{
	this->_nome = nome;
}

void Mamifero::setCor(std::string cor)
{
	this->_cor = cor;
}

void Mamifero::setIdade(int idade)
{
	this->_idade = idade;
}

void Mamifero::setSexo(std::string sexo)
{
	this->_sexo = sexo;
}

std::string Mamifero::getNome() const
{
	return this->_nome;
}

std::string Mamifero::getCor() const
{
	return this->_cor;
}

int Mamifero::getIdade() const
{
	return this->_idade;
}

std::string Mamifero::getSexo() const
{
	return this->_sexo;
}


