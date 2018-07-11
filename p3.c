/*
Otavio Augusto Portela Luciano
11621ETE008
*/

#include <stdio.h>

void ConvBinario(unsigned n)
{
	int i = 0;
	unsigned mask = 1 << 31;
	printf("%d (", n);
	for (i = 0; i <= 32; i++)
	{
		char c = n & mask ? '1' : '0';
		n <<= 1;
		printf("%c", c);
	}
	printf(")");
}

int main()
{
	int opcao = 0,n1,n2;
	printf("CALCULADORA, digite 0 para sair.\n\n");
	while (1)
	{
		printf("\nDigite a opcao: ");
		scanf("%d", &opcao);

		if (opcao == 0)
			break;

		switch (opcao)
		{
		case 1:
		printf("\nDigite um numero: ");
		fflush(stdin);
		scanf("%d", &n1);
			printf("NOT ");	ConvBinario(~n1); printf(" : "); ConvBinario(n1);
			break;

		case 2:
			printf("\nDigite um numero: ");
			scanf("%d", &n1);
			printf("\nDigite outro numero: ");
			scanf("%d", &n2);

			ConvBinario(n1); printf(" AND "); ConvBinario(n2);
			printf(" : "); ConvBinario(n1&n2);
			break;

		case 3:
			printf("\nDigite um numero: ");
			scanf("%d", &n1);
			printf("\nDigite outro numero: ");
			scanf("%d", &n2);

			ConvBinario(n1); printf(" OR "); ConvBinario(n2);
			printf(" : "); ConverterBinario(n1 | n2);
			break;

		case 4:
			printf("\nDigite um numero: ");
			scanf("%d", &n1);
			printf("\nDigite outro numero: ");
			scanf("%d", &n2);

			ConvBinario(n1); printf(" XOR "); ConvBinario(n2);
			printf(" : "); ConverterBinario(n1 ^ n2);
			break;

		case 5:
			printf("\nDigite um numero: ");
			scanf("%d", &n1);
			printf("\nDigite outro numero: ");
			scanf("%d", &n2);

			ConvBinario(n1); printf(" >> "); ConvBinario(n2);
			printf(" : "); ConvBinario(n1 >> n2);
			break;

		case 6:
			printf("\nDigite um numero: ");
			scanf("%d", &n1);
			printf("\nDigite outro numero: ");
			scanf("%d", &n2);

			ConvBinario(n1); printf(" << "); ConvBinario(n2);
			printf(" : "); ConvBinario(n1 << n2);
			break;
		default:
			break;
		}
	}
}
