#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef
	struct Dimensoes
	{
		float l;
		float p;
		float a;
	}
Dimensoes_m;
typedef
	struct Produto
	{
	char nome[64];
	float preco;
	Dimensoes_m dimensoes;
	}
Produto_m;
void cadastro(int x, Produto_m p[2])
{
	printf("\nNome: ");
	fgets(p[x].nome, 64, stdin); 
	p[x].nome[strlen(p[x].nome)-1] = '\0';
	printf("\nPreco: ");
	scanf("%f", &p[x].preco);
	getchar();
	printf("\nLargura: ");
	scanf("%f", &p[x].dimensoes.l);
	getchar();
	printf("\nProfundidade: ");
	scanf("%f", &p[x].dimensoes.p);
	getchar();
	printf("\nAltura: ");
	scanf("%f", &p[x].dimensoes.a);
	getchar();
}
int main()
{
	int op_A=0, op_B=0, i=0;
	char aux[64];
	Produto_m p[2];
	for (i=0; i<2; i++)
		p[i].nome[0] = '\0';
	do
	{
		printf("\n1 - Cadastro\n2 - Consulta\n....");
		scanf("%d", &op_A);
		getchar();
		switch (op_A)
		{
			case 1:
				printf("\n....1 - Produto 1\n....2 - Produto 2\n........");
				scanf("%d", &op_B);
				getchar();
				printf("\nCadastre as informacoes do produto %d: ", op_B);
				cadastro(op_B-1, p);
				printf("\nProduto %d cadastrado com sucesso", op_B);
				break;
			case 2:
				printf("\nProduto a ser procurado: ");
				scanf("%d", &op_B);
				getchar();
				if (strlen(p[op_B-1].nome) == 0)
					printf("\nProduto nao cadastrado!\n");
				else
					printf("\n%s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm", p[op_B-1].nome, p[op_B-1].preco, p[op_B-1].dimensoes.l, p[op_B-1].dimensoes.p, p[op_B-1].dimensoes.a);
				break;
		}
	}while (op_A == 1 || op_B == 2);
	return 0;
}