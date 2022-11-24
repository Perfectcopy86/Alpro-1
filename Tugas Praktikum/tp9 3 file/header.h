/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP9 Alpro (BRCM21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>

int powerakhir;
void kekuatanboss(char str8[], char str9[]);//prosedur untuk hitung kuat boss
void kekuatankarakter1(char str10[][50], char str11[][50], int ascii3[], int ascii4[], int n, int power1[], int powerakhir2[]);//prosedur untuk hitung kuat karakter
void elemen(char str6[], char str3[][50], int tandaele[],  int n);//prosedur untuk nentuin elemen yang kalah sama yang menang
void kekuatankarakter2(int powerakhir2[], int tandaele[], int n);//prosedur untuk hitung kuat karakter setelah ada elemen
void superior(char str2[][50], int powerakhir2[], int n);//prosedur untuk hitung superior inferior
