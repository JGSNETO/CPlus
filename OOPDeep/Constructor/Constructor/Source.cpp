#include "Aluno.h"
#include <iostream>
#include <string>

int main()
{
	{
		/*Como n�o existe mais o construtor padr�o. Por isso da erro: Aluno neto;.
		Aluno(){} -> Construtor padr�o
		Este contrutor � criado pelo compilador, caso voc� n�o crie nenhum construtor. Se voc� criar
		o compilador deixar� de criar o compilador padr�o*/
		Aluno Neto("Neto", 10, true);
		Neto.Set_Idade(20);
		std::cout << "Idade: " << Neto.Get_Idade() << "\n";
	}
	/*O destrutor ele tem que ser chamado ap�s o fim do escopo do objeto. Logo um novo escopo({}) ser� criado*/
	/*N�o precisa chamar, automaticamente ele � executado. */
	system("PAUSE");
	return 0;
}