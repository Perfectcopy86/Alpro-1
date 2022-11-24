/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan UAS Alpro soal 1 (skktas21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

void cek(char str[][100], char kata[], int n)
{
	int sum,i,j;
	sum = 0;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < strlen(str[i]); j++)
			{
				if(i + j >= strlen(kata) || kata[i + j] != str[i][j])
				{
					if(j == n )
					{
						sum++;

					}
				}
			}
		}
		printf("%d\n", sum);
}