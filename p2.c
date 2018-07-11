/*
Otavio Augusto Portela Luciano
11621ETE008
*/

#include <stdio.h>

void preenche(char bits[])
{
	printf("\nescreva o valor a ser convertido: ");
	scanf("%s", bits);
}
int convoct(int n, int a)
{
    int aux=0, i=1;
    while (n!=0)
    {
        aux+=(n%a)*i;
        n/=a;
        i*=10;
    }
    return aux;
}
void convhex(int num, int c, int menu)
{
	int i=0, j=0, k=0, aux=0, p=0;
	char hex[256], temp[256];
	k=num;
	while (k!=0)
	{
		aux=k%c;
		if (aux<10)
			temp[j++]=48+aux;
		else
		    temp[j++]=55+aux;
		k=k/c;
		p++;
	}
	for (i=p-1, j=0; i+1!=0; --i, ++j)
		hex[j]=temp[i];
	hex[p]='\0';
	printf("\n| \"%i\" + \"%i\" | \"%s\"|\n", menu, num, hex);
}
int convdec(char bits[], int b) 
{
	int i=0, aux=0;
	for(i=0; bits[i]!='\0'; i++)
	{
	    if (bits[i]<=57 && bits[i]>=48)
	    {
            aux=aux*b+(bits[i] - '0');
	    }
        else if (bits[i]>=65)
        {
            {
        	    if (bits[i]>=97)
    	        {
    	        	bits[i]-=32;
    	        	aux=aux*b+(bits[i] - '7');
				}
    	        else
        	        aux=aux*b+(bits[i] - '7');
		    }
	    }
    }
    return aux;
}
int convbin(int num, int b)
{
	char bin[256];
	int i=0, j=0, k=1, n=0, aux=0, aux2;
	for (n=0; num>=(1<<n); n++);
	for (i=1; i<=n; i++)
	{
		if (num%2==0)
		{
			bin[n-i]='0';
			num=num/2;
		}
		else
		{
			bin[n-i]='1';
			num=(num-1)/2;
		}
	}
	for (i=0; bin[i]!='\0'; i++)
	{
		k=1;
		for(j=1; j<(n-i); j++)
		    k=k*b;
		aux+=(bin[i] - '0')*(k);
	}
    return aux;
}
int main()
{
	char bits[256];
	int menu=0, b=0, cv=0, num=0, test=0;
	do
	{
		printf("\nEscolha a conversao: \n[1]Binario para Decimal \n[2]Binario para Hexadecimal \n[3]Hexadecimal para Decimal \n[4]Hexadecimal para Binario \n[5]Decimal para Binario \n[6]Decimal para Hexadecimal \n[7]Octal para Decimal \n[8]Decimal para Octal \n[9]Sair do programa \n:");
		scanf("%i", &menu);
		switch (menu)
		{
			case 1: // Bin -> Dec
				b=2;
				preenche(bits);
                cv=convdec(bits, b);
				printf("\n| \"%i\" + \"%s\" | \"%i\" |\n", menu, bits, cv);
				break;
			case 2: // Bin -> Hex
			    b=2;
			    preenche(bits);
			    num=convdec(bits, b);
			    b=16;
                convhex(num, b, menu);
				break;
			case 3: // Hex -> Dec
				b=16;
				preenche(bits);
                cv=convdec(bits, b);
				printf("\n| \"%i\" + \"%s\" | \"%i\" |\n", menu, bits, cv);
				break;
			case 4: // Hex -> Bin
				b=16;
				preenche(bits);
				num=convdec(bits, b);
				b=10;
				cv=convbin(num, b);
				printf("\n| \"%i\" + \"%s\" | \"%i\" |\n", menu, bits, cv);
				num=0;
				break;
			case 5: // Dec -> Bin
				b=10;
				printf("\nPreencha com o valor a ser convertido: ");
	            scanf("%i", &num);
                cv=convbin(num, b);
				printf("\n| \"%i\" + \"%i\" | \"%i\" |\n", menu, num, cv);
				break;
			case 6: // Dec -> Hex
			    b=16;
			    printf("\nPreencha com o valor a ser convertido: ");
	            scanf("%i", &num);
                convhex(num, b, menu);
				break;
			case 7: // Oc -> Dec
				b=8;
				preenche(bits);
                cv=convdec(bits, b);
				printf("\n| \"%i\" + \"%s\" | \"%i\" |\n", menu, bits, cv);
				break;
			case 8: // Dec -> Oc
			    b=8;
			    printf("\nPreencha com o valor a ser convertido: ");
            	scanf("%i", &num);
			    cv=convoct(num, b);
			    printf("\n| \"%i\" + \"%i\" | \"%i\" |\n", menu, num, cv);
				break;
			default: 
			    if(menu!=9)
			    {
			    	printf("\n\nEscolha invalida\n\n");
			        break;
				}
		}
	}while (menu!=9);
	return 0;
}
