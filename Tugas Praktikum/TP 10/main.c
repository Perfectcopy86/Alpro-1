/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP10 Alpro (ULTS21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


#include "header.h"

int main(){
	int i;
	int n;
	char in1;
	char in2;
	char in3;

	scanf(" %c", &in1);

	if(in1 == 'B')
	{
		n=4;


	}else if(in1 == 'W')
	{
		n=5;

	}else if(in1 == 'N')
	{
		n=7;

	}

	int kode1[n];
	int nampungjum1=jumlah(in1, kode1);


	for(i=0; i<n; i++)
	{
		scanf("%d", &kode1[i]);
	}

	scanf(" %c", &in2);
	if(in2 == 'B')
	{
		n=4;


	}else if(in2 == 'W')
	{
		n=5;

	}else if(in2 == 'N')
	{
		n=7;

	}

	int kode2[n];
	int nampungjum2=jumlah(in2, kode2);


	for(i=0; i<n; i++)
	{
		scanf("%d", &kode2[i]);
	}

	scanf(" %c", &in3);
	if(in3 == 'B')
	{
		n=4;


	}else if(in3 == 'W')
	{
		n=5;

	}else if(in3 == 'N')
	{
		n=7;

	}

    int kode3[n];
    int nampungjum3=jumlah(in3, kode3);

	for(i=0; i<n; i++)
	{
		scanf("%d", &kode3[i]);
	}
	printf("%d %d %d", jumlah(in1, kode1), jumlah(in2, kode2), jumlah(in3, kode3));

	return 0;
}