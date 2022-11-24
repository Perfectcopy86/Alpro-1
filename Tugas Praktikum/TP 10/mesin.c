/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP10 Alpro (ULTS21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int jumlah (char in4, int kode4[])
{
    int i, n;
	int nampungjum;

	if(in4 == 'B')
	{
		n=4;


	}else if(in4 == 'W')
	{
		n=5;

	}else if(in4 == 'N')
	{
		n=7;

	}
	nampungjum=0;
	for(i=0; i<n; i++)
	{
		nampungjum += kode4[i];
	}
	return nampungjum;
}