#include <stdio.h>
#include <stdlib.h>
#define maximo 100
void gera_numeros(float * vet, int tam)
{
	int i;
	float num;
	for(i=0; i<tam; i++)
		vet[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}
float soma(float *inicio_vet, float *fim_vet) 
{
	return (inicio_vet == fim_vet)? 0.0 : *inicio_vet + soma(inicio_vet+1, fim_vet);
}
float produto(float *inicio_vet, float *fim_vet) 
{
	return (inicio_vet == fim_vet)? 1.0 : *inicio_vet * produto(inicio_vet+1, fim_vet);
}
int main()
{
	srand(123456);
	float v[maximo];
	int op=0;
	gera_numeros(v, maximo);
	do
	{
		printf("\n1 - Somatorio\n2 - Produtorio\n");
		scanf("%d", &op);
		getchar();
		switch (op)
		{
		case 1:
		printf("\n%f\n", soma(v, v + maximo)); 
		break;
		case 2:
		printf("\n%f\n", produto(v, v + maximo)); 
		break;
		}
	}while(op==1 || op==2);
	return 0;
}