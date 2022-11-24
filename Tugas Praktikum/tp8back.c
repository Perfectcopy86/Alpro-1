/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP8 Alpro (EDBB212) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include<stdio.h>
#include<string.h>

int main(){
    char kunci[50];
    int jumlah = 0;
    int panjang;
    char hapus = '*';
    int len;
    int ascii[50];
    int terpanjang;




    int i, j, k, l;

    scanf("%s", &kunci);

    int n;
    scanf("%d", &n);
    char str[n][50];
    char ganti[n][50];
    int z[n];
    int number[n];

    for(i=0; i<n; i++)
    {
        scanf("%s", &str[i]);
    }


    panjang= strlen(kunci);
    for(i=0; i<panjang;i++)
    {
        jumlah = jumlah + kunci[i];
    }
    jumlah = jumlah % 26;
    //printf("%d\n", jumlah);
    for(i=0; i<n;i++)
    {


    len = strlen(str[i]);
    //printf("%d\n", len);

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<len; j++)
        {
            len = strlen(str[i]);

            if(str[i][j] == hapus)
            {

                for(k=j; k<len; k++)
                {
                str[i][k]=str[i][k+1];
                }
                len--;
                k=0;
                j--;
            }
        }

    }
    str[i][j] = '\0';
    for(i=0; i<n;i++)
    {
        len= strlen(str[i]);
        for(j=0; j<len;j++)
        {
            ganti[i][j]= str[i][j];

        }
        ganti[i][j]='\0';
    }

    j=0;
    for(i=0; i<n;i++)
    {
        len = strlen(ganti[i]);
        for(l=0; l<len;l++)
        {


            if((str[i][l] <= 122)&&(str[i][l]>=97)||(str[i][l]<=90)&&(str[i][l]>=65))
            {
                ganti[i][l]= str[i][l]-jumlah;

                if((ganti[i][l]<97)&&(str[i][l]>=97)&&(str[i][l]<=122))
                {
                    ganti[i][l] +=26;
                }else if((ganti[i][l]<65)&&(str[i][l]<=90)&&(str[i][l]>=65))
                {
                    ganti[i][l]+=26;
                }



           }else{
                ganti[i][l]= ganti[i][l];
            }

        }


    }


    for(i=0; i<n; i++)
    {
        len = strlen(ganti[i]);
        //printf("%d\n", len);
    }

printf(">> Deteksi Virus <<\n");
terpanjang=0;
for(i=0; i<n; i++)
{

    if(strlen(ganti[i]) > terpanjang)
    {
        terpanjang = strlen(ganti[i]);
    }

}

for(i=0; i<n; i++)
{
    len = strlen(ganti[i]);
    ascii[i] =0;


        for(j=0; j<len; j++)
        {
            ascii[i] += ganti[i][j];
        }
        //printf("%d\n", ascii[i]);

        if(ascii[i] % 2 != 0)
        {
            printf("%s\n", ganti[i]);

        }else if(ascii[i] % 2 == 0)
        {
            for(j=0; j<terpanjang-strlen(ganti[i]); j++)
            {
                printf(" ");
            }
            printf("%s\n", ganti[i]);
        }
        //printf("%s\n", ganti[i]);

}

printf("\n");
printf(">> Path Directory Asli <<\n");
printf("%s", ganti[0]);
for(i=1; i<n; i++)
{
    printf("\\%s", ganti[i]);
}
printf("\n\n");
printf(">> Kamus <<\n");

for(i=0;i<n;i++)
{
    number[i] = 1;


    printf("%d. [%s] -> [%s]\n", number[i]+i, str[i], ganti[i]);
}

    return 0;
}
