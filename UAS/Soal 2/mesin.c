/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan UAS Alpro soal 2 () dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

void urut(int angka[][4], int n)
{
    int i,j,maks,min;

    for(i=0; i<1;i++)
    {
        for(j=0; j<1; j++)
        {
            if(angka[i][j]>angka[i][j+1]&&angka[i][j]>angka[i][j+2]&&angka[i][j]>angka[i][j+3])
            {
                 maks = angka[i][j];
            }else if(angka[i][j+2]>angka[i][j+1]&&angka[i][j+2]>angka[i][j]&&angka[i][j+2]>angka[i][j+3])
            {
                maks = angka[i][j+2];
            }else if(angka[i][j+1]>angka[i][j+2]&&angka[i][j+1]>angka[i][j]&&angka[i][j+1]>angka[i][j+3])
            {
                maks = angka[i][j+1];
            }else if(angka[i][j+3]>angka[i][j+1]&&angka[i][j+3]>angka[i][j]&&angka[i][j+3]>angka[i][j+2])
            {
                maks = angka[i][j+3];
            }
            if(angka[i][j]<angka[i][j+1]&&angka[i][j]<angka[i][j+2]&&angka[i][j]<angka[i][j+3])
            {
                min = angka[i][j];
            }else if(angka[i][j+2]<angka[i][j]&&angka[i][j+2]<angka[i][j+1]&&angka[i][j+2]<angka[i][j+3])
            {
                min = angka[i][j+2];
            }else if(angka[i][j+1]<angka[i][j]&&angka[i][j+1]<angka[i][j+2]&&angka[i][j+1]<angka[i][j+3])
            {
                min = angka[i][j+1];
            }else if(angka[i][j+3]<angka[i][j]&&angka[i][j+3]<angka[i][j+1]&&angka[i][j+3]<angka[i][j+2])
            {
                min = angka[i][j+3];
            }

            printf("%d %d", min, maks);
    }
    }
}