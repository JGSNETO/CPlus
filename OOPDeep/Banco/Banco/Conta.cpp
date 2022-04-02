#include "Conta.h" //Diret�rio padr�o dos programas
#include <iostream>
#include <string>



/*Aqui o operador escopo::est� indicando que a fun��o / M�todo sacar pertence a classe Conta e que este c�digo a seguir vai
* implementar a fun��o Sacar. 
*/
bool Conta::Sacar(double Valor)
{
	/*Se o valor do salto no objeto for menor que o valor a ser sacado, ele n�o poder� sacar*/
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return false;

	}else{
		Saldo -= Valor;
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
	/*Se n�o foi: Temos que diminuor o saldo*/
	/*Aqui nem precisaria ter o else, por�m por boa pr�tica, vou colocar*/

};

void Conta::Depositar(double Valor)
{
	/*Saldo += Valor*/
	Saldo += Valor;
	std::cout << "\nDeposito de R$: " << Valor << " Efetuado com sucesso\n";
}
/*A fun��o recebe como argumento um objeto do tipo conta e vai ser colocada em destino
* que � a conta que se vai depositar
*/
void Conta::Transferir(Conta &Destino, double Valor) 
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";
	}
	else {
		/*Aqui destino est� com o objeto passado para a fun��o
		* Logo vai chamar o m�todo Depositar deste objeto
		*/
		Destino.Depositar(Valor);
		/*Depois de depositar voc� deve retirar este valor depositado do saldo*/
		Saldo -= Valor;
		std::cout << "\n*********Dados********\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Ag: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "\nTransfer�ncia realizada com sucesso\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}
int Conta::GetAgencia()
{
	return Agencia;
}
int Conta::GetNumConta()
{
	return NumConta;
}
std::string Conta::GetTitular()
{
	return Titular;
}
void Conta::SetBanco(std::string Banco)
{
	/*Como o compilador vai saber se banco � vari�vel local ou o atributo da classe conta ?*/
	//Banco = Banco
	this->Banco = Banco; 

}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}
void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}

