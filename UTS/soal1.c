/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi soal 1 UTS alpro 1 (plprbt21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include<stdio.h>

int main(){
	int i;//variabel baris
	int j;//variabel kolom
	int size;//variabel untuk ukuran


	scanf("%d", &size);//input dari user ukuran


	for(i=0; i<size; i++)//baris pertama
	{     //spasi
		for(j=0; j<size; j++){
                printf(" ");
            }
        for(j=0; j<size; j++){
                printf(" ");
            }
        for(j=0; j<size; j++){
                printf(" ");
            }
        for(j=0; j<size; j++){
                printf(" ");
            }
        for(j=0; j<size; j++){
                printf(" ");
            }

        //pola pertama dari baris pertama
        for(j=size-i; j>=2; j--){
                printf(" ");
            }
            for(j=size-i; j>=1; j--){
                printf("");
            }//spasi selesai
            for(j=0; j<=i; j++){
                printf("*");
            }
            printf("\n");
	}

	for(i=0; i<size; i++)//baris kedua
	{  //spasi
		for(j=0; j<size; j++)
			{
                printf(" ");
            }
            //pola pertama baris kedua
        for(j=size-i; j>=2; j--){
                printf(" ");
            }
            for(j=size-i; j>=1; j--){
                printf("");
            }//spasi selesai
            for(j=0; j<=i; j++){
                printf("*");
            }

            for(j=0; j<size; j++)
			{
                printf(" ");
            }
            for(j=0; j<size; j++)
			{
                printf(" ");
            }
            //pola kedua baris kedua
            for(j=0; j<size; j++)
            {
            printf("*");
            }
            for(j=0; j<size; j++)
			{
                printf(" ");
            }
            for(j=0; j<size; j++)
			{
                printf(" ");
            }
            for(j=0; j<size; j++)
			{
                printf(" ");
            }
            //pola ketiga baris kedua
            for(j=size-i; j>=2; j--){
                printf(" ");
            }
            for(j=size-i; j>=1; j--){
                printf("");
            }//spasi selesai
            for(j=0; j<=i; j++){
                printf("*");
            }
             for(j=0; j<size; j++)
			{
                printf(" ");
            }

            //pola keempat baris kedua
            for (j=i;j<=size-1;j++)
            {
            printf(" ");
            }
            for (j=0;j<=i;j++)
            {
            printf("*");
            }
            for (j=0;j<i;j++)
            {
            printf("*");
            }
                printf("\n");


	}
	for(i=0; i<size; i++)//baris ketiga
    {
        //pola pertama baris ketiga
        for(j=0; j<size; j++)
        {
            printf("*");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        //pola kedua baris ketiga
        for(j=0; j<size; j++)
        {
            printf("*");
        }
        for(j=0; j<size; j++)
        {
            printf("*");
        }
        for(j=0; j<size; j++)
        {
            printf("*");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        //pola ketiga baris ketiga
        for(j=0; j<size; j++)
        {
            printf("*");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        //pola keempat baris ketiga
        for(j=0; j<size; j++)
        {
            printf("*");
        }
        for(j=0; j<size+1; j++)
        {
            printf("*");
        }




        printf("\n");
    }

    for(i=0;i<size;i++)//baris keempat
    {
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        //pola pertama baris keempat
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(j=size-i; j>=1; j--)
        {
            printf("*");

        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        //pola kedua baris keempat
        for(j=0; j<size; j++)
        {
            printf("*");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        //pola ketiga baris keempat
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(j=size-i; j>=1; j--)
        {
            printf("*");

        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        //pola keempat baris keempat
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for (j=0;j<i;j++){
            printf("");
        }
        for (j=i;j<size;j++){
            printf("*");
        }
        for (j=i;j<size-1;j++){
            printf("*");
        }
        printf("\n");
    }



    for(i=0;i<size;i++)//baris kelima
    {
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }
        for(j=0; j<size; j++)
        {
            printf(" ");
        }

        //pola pertama baris kelima
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(j=size-i; j>=1; j--)
        {
            printf("*");

        }
        printf("\n");


    }

	return 0;
}
