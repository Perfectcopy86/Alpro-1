/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP9 Alpro (BRCM21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"





int main(){
	int i, j, k;
	char str5[50];//kata pertama dari boss
	char str6[50];//kata kedua dari boss
	char str7[50];//kata ketiga dari boss
	char str8[25];//tampungan kata 1 jurus boss
	char str9[25];//tampungan kata 2 jurus boss
	int tanda;// sebagai tanda untuk memisah kata ketiga boss
	int ascii1, ascii2, power, powerakhir;// variabel untuk ascii kata 1 dan 2 dari boss dan kekuatannya

		scanf("%s %s %s", &str5, &str6, &str7);// input user boss

	int n;
	scanf("%d", &n);//input user jumlah karakter yang menantang boss
	int tandadua[n];//sebagai tanda untuk memisah kata ketiga masing masing karakter
	char str2[n][50];//kata pertama dari karakter
	char str3[n][50];//kata kedua dari karakter
	char str4[n][50];//kata ketiga dari karakter
	char str10[n][50];//tampungan kata 1 jurus karakter
	char str11[n][50];//tampungan kata 2 jurus karakter
	int ascii3[n];//untuk ascii karakter kata 1 jurus
	int ascii4[n];//untuk ascii karakter kata 2 jurus
	int power1[n];// untuk kuat asli karakter
	int powerakhir2[n];// kuat akhir karakter
	int tandaele[n];//tanda elemen
	for(i=0; i<n; i++)
	{
		scanf("%s %s %s", &str2[i], &str3[i], &str4[i]);// input user karakter
	}
	//memisahkan kata 1 dari jurus boss
    i=0;
	while(strlen(str7) && str7[i] != '_')
	{
		str8[i]= str7[i];
		i++;
	}
	str8[i] = '\0';


	tanda =0;
    i=0;//inisialisasi
    while(i<strlen(str7))
    {
        if(str7[i]=='_'){
        tanda = i+1;
        }
    i++;//iterasi
    }


    //memisahkan kata 2 dari jurus boss
	i = tanda;
	j=0;
	while( str7[i] != '\0')
	{
		str9[j] = str7[i];
		i++;
		j++;
	}
	str9[j] = '\0';

	//memisahkan kata 1 dari jurus karakter
	for(i=0; i<n; i++)
    {
        j=0;
        while(strlen(str4[i]) && str4[i][j] != '_')
        {
            str10[i][j]= str4[i][j];
            j++;

        }


        str10[i][j]= '\0';


    //memisahkan kata 2 dari jurus karakter
    tandadua[i] =0;
    j=0;//inisialisasi
    while(j<strlen(str4[i]))
    {
        if(str4[i][j]=='_')
        {
            tandadua[i] = j+1;
        }
    j++;//iterasi
    }

	j = tandadua[i];
	k = 0;
        while( str4[i][j] != '\0')
        {
            str11[i][k] = str4[i][j];
            k++;
            j++;

        }
        str11[i][k] = '\0';
    }


kekuatanboss(str8, str9);//manggil prosedur kekuatanboss
kekuatankarakter1(str10, str11, ascii3, ascii4, n, power1, powerakhir2);//manggil prosedur kekuatankarakter1
elemen(str6, str3, tandaele, n);//manggil prosedur elemen
kekuatankarakter2(powerakhir2, tandaele, n);//manggil prosedur kekuatankarakter2
superior(str2, powerakhir2, n);//manggil prosedur superior
	return 0;
}