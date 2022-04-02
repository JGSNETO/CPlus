#pragma once
#pragma once

#include <iostream>
#include <string>

/*Este � o arquivo .h � onde existem apenas as declara��es das atribui��es e m�todos da classe.
Aqui n�o existem as defini��es, implementa��es das fun��es, pois isso ser� feito no arquivo .cpp.
� a separa��o do O QUE (.h) do COMO (.cpp).*/
class Conta
{

private:

    std::string Banco;
    int Agencia;
    int NumConta;
    std::string Titular;
    double Saldo {0.0};

public:
    bool Sacar(double valor);
    void Depositar(double valor);
    /* Neste caso o par�metro Destino recebe apenas uma c�pia do valor do objeto. Ele n�o tem como alterar
    o objeto pois s� recebeu uma c�pia dele. Logo podemos usar o conceito de refer�ncia para passar a refer�ncia
    do objeto com isso Destino vai poder alterar este objeto pois ser� realizada uma pasagem de argumentos 
    por valor refer�ncia.*/
    void Transferir(Conta &Destino, double valor);
    double ConsultarSaldo();
    std::string GetBanco();
    int GetAgencia();
    int GetNumConta();
    std::string GetTitular();
    void SetBanco(std::string Banco);
    void SetAgencia(int Agencia);
    void SetTitular(std::string Titular);
    void SetNumConta(int NumConta);


};