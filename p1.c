/*
Otavio Augusto Portela Luciano
11621ETE008
*/

#include <stdio.h>

int main()
{
int i=0, est;
char bit[256];
    printf("Entre com um numero: ");
scanf("%s", bit);
for (i=0; bit[i]!='\0'; i++)
{
if (bit[i]=='0')
{
if (est==0)
est=0;
else if (est==1)
est=2;
else if (est==2)
est=1;
}
if (bit[i]=='1');
{
if (est==0)
est=1;
if (est==1)
est=0;
if (est==2)
est=2;
}
}
if (est==0)
    printf("%s  multiplo de 3", bit);
else
    printf("%s nao e um multiplo de 3", bit);
return 0;
}
