/*
Otavio Augusto Portela Luciano
11621ETE008
*/
#include <stdio.h>

int main()
{
	int a , b, numero[64], *pnumero;
	char frase[256], *pfrase;
	for(a = 0; a < 256; a++) frase[a] = '\0';
	printf("\t 1 - Codifica \n\t 2 - decodifica \n ");
	scanf("%d",&b);
	getchar();
	switch(b)
	{
		case 1:{
			printf("\tDigite a frase a ser codificada \n\n\t"); 
			gets(frase);
			char *pfrase= frase;
			printf("\n\tFrase codificada:\n\t\t");
			
			for(b=0;frase[b];b++){
				pnumero = (int*)pfrase;
				if(pnumero[a]!=0) printf("%d",pnumero[a]);
				if(pnumero[a+1]!=0) printf(", ");}
			break;
		}
		case 2:
		{
			printf("\tDigite a frase a ser decodifica\n\n\n]");
			
			for(a=0;a<64;a++)
			 {
				printf("\tn%d:\t ", a+1); scanf("%d", &numero[a]);
				pfrase = (char*)numero;
				if(numero[a]==0) 
				break;
			 }
			 printf("\n\n\tFrase decodificada: %s", pfrase);
	    }	
	}
	return 0;
}
