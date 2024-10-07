#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// Contador de numeros impar / par 

	// Limitação de qtd de numeros que podem ser inseridos
	int numeros[10];
	//criação das variaeis para incrementação
	int i, pares = 0, impar = 0;
	int a = 1;

	// Cód para inserir os numeros
	for (i = 0; i < 10;i++)
	{
		printf("Numero");
		printf(" %d: ", a);
		scanf_s("%d", &numeros[i]);
		a++;
	}
	// Cód para verificar cada numero inserido
	for (i = 0; i < 10;i++)
	{	
		// Verificador PAR
		if (numeros[i] % 2 == 0)
		{
			pares++;
		}
		// Verificador IMPAR
		if (numeros[i] % 2 == 1)
		{
			impar++;
		}
	}
	printf("\n");
	printf("Voce digitou %d numeros pares\n", pares);
	printf("Voce digitou %d numeros impares\n", impar);
	printf("\n");
	system("pause");
	return 0;
}