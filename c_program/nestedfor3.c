#include<stdio.h>
void main()
{
	int row;
	int col;
	for(row=1;row<=3;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",col);
		}
		printf("\n");
	}
}
