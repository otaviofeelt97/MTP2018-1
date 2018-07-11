/*
Otavio Augusto Portela Luciano
11621ETE008
*/

#include <stdio.h>
int sm(int l, int *v)

{

   if(l>0)

        return *v+sm(l-1, v+1);

    else

        return 0.0;

}

float med(int x, int y)

{

    return (float)x/(float)y;

}

int main ()

{
	int v[]={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
	int tam=0, i=0;
	printf("Quantidade a ser somada:\n");
	scanf("%d", &tam);
	printf("\nValores: \n");
	for (i=0; i<tam; i++)
		scanf("%d", &v[i]);
	printf("\nmedia = %f", med(sm(tam, v), tam));
	return 0;

}
