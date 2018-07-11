/*
Otavio Augusto Portela Luciano
11621ETE008
*/

#include <stdio.h>

int A(int x, int y)

{

    if (x==0)

        return y+1;

    else if (x>0 && y==0)

        return A(x-1, 1);

    else if (x>0 && y>0)

        return A(x-1, A(x, y-1));

}

int main ()

{

	int x=0, y=0;

	printf("Valores para x e y:\n");

	scanf("%d %d", &x, &y);

	printf("%d", A(x, y));

	return 0;

}
