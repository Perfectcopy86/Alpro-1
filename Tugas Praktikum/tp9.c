/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP9 Alpro (BRCM21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>


int main(){
	int i, j;
	char str[3][50];

	for(i=0; i<3;i++)
	{
		scanf("%s", &str[i]);
	}
	int n;
	scanf("%d", &n);
	char str2[n][50];

	for(i=0; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			scanf("%c", &str2[j]);
		}
	}


	return 0;
}
