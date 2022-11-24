/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi soal 2 UTS alpro 1 (brarhr21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include<stdio.h>

int main(){
	int n;//untuk tipe karakter
	int m;//variabel untuk huruf yang dipanggil
	int i;
	int j;
	int awal, akhir;//variabel untuk batasan


	scanf("%d", &n);//input dari user untuk jumlah array

	char arr[n];//array untuk huruf

	for(i=0; i<n; i++)
	{

        scanf(" %c", &arr[i]);//memasukan array satu satu
	}

    scanf("%d", &awal);//batasan awal
    scanf("%d", &akhir);//batasan akhir

    scanf("%d", &m);//memasukan jumlah huruf yang akan dicek
    char arrm[m];//array untuk pengecekkan huruf
    int jumlahm[m];


    for(i=0; i<m; i++)
    {
        scanf(" %c", &arrm[i]);

    }
    for(i=0; i<m; i++)
    {
        jumlahm[i]=0;
    }
    for(i=0; i<m; i++)
    {

        for(j=awal; j<=akhir; j++)
        {
            if(arr[j]== arrm[i])
        {
            jumlahm[i] ++;
        }
        }
    }

    printf("%d", jumlahm[0]);//output untuk kotak awal
    for(i=1; i<m; i++)
        {

            printf(" %d", jumlahm[i] );//output untuk kotak selanjutnya



        }

        printf("\n");



	return 0;
}
