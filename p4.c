/*
Otavio Augusto Portela Luciano
11621ETE008
*/

#include <stdio.h>
int main()
{
	int conv=0, c=0, i=0;
	char num[256];
	scanf("%s", num);
	getchar();
	for (i=0; num[i]; i++)
	{
		if ((num[i]-'0')>=0 && (num[i]-'0')<=9)
			c=c*10+(num[i]-'0');
		else;
	}
	printf("%i", c);
	return 0;
}
