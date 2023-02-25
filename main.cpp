#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int mas[100][100];
	int n,m;
	
	printf("Enter the number of rows: ");
	scanf("%i",&n);
	printf("Enter the number of columns: ");
	scanf("%i",&m);
	
	srand(time(NULL));
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			mas[j][i]=rand()%9+(-2);
		}
	}
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("%7i",mas[j][i]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\n");
	
	for (int i=0; i<n; i++)
	{
		bool fl=true;
		while(fl)
		{
			fl=false;
			for (int j=0; j<m-1; j++)
			{
				if(mas[i][j]>mas[i][j+1])
				{
					int q=mas[i][j];
					mas[i][j]=mas[i][j+1];
					mas[i][j+1]=q;
					fl=true;
				}
			}
		}
	}
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("%7i",mas[j][i]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\n");
	
	for (int i=0; i<n; ++i)
	{
		int q=mas[i][0];
		mas[i][0]=mas[i][m-1];
		mas[i][m-1]=q;
	}
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("%7i",mas[j][i]);
		}
		printf("\n");
	}
}
