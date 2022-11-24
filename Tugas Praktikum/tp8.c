/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP8 Alpro (EDBB212) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include<stdio.h>
#include<string.h>

int main(){
    char kunci[50];//variabel array untuk kata kunci
    int jumlah = 0;// variabel untuk deklarasi jumlah ascii dari kata kunci
    int panjang;// variabel untuk menghitung panjang string kata kunci
    char hapus = '*';//variabel untuk menghapus bintang
    int len;// variabel untuk menghitung panjang string
    int ascii[50];// variabel untuk menampung panjang string yang sudah diubah
    int terpanjang;// variabel untuk menandai string terpanjang




    int i, j, k, l;

    scanf("%s", &kunci);//masukan user untuk kata kunci

    int n;
    scanf("%d", &n);//masukan user untuk jumlah string
    char str[n][50];//array of string sebelum bintang hilang 
    char ganti[n][50];// array of string sesudah bintang hilang 
    int number[n];//array untuk penomoran

    for(i=0; i<n; i++)
    {
        scanf("%s", &str[i]);//masukan user untuk string
    }


    panjang= strlen(kunci);//memasukan panjang string kunci ke variabel panjang
    // kode untuk menjumlahkan ascii per karakter
    for(i=0; i<panjang;i++)
    {
        jumlah = jumlah + kunci[i];
    }
    jumlah = jumlah % 26;//untuk menentukan harus berapa mundur
    //printf("%d\n", jumlah);
    for(i=0; i<n;i++)
    {
    len = strlen(str[i]);//memasukan panjang tiap string ke len
    //printf("%d\n", len);
    }
    //kode untuk menghapus bintang
    for(i=0; i<n; i++)
    {
        for(j=0; j<len; j++)
        {
            len = strlen(str[i]);

            if(str[i][j] == hapus)//jika string terdapat bintang maka bintang akan dihapus
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
    str[i][j] = '\0';//untuk menghindari simbol tidak diinginkan muncul
    //untuk menampung yang sudah dihilangkan bintangnya tetapi belum diubah sesuai kunci 
    for(i=0; i<n;i++)
    {
        len= strlen(str[i]);
        for(j=0; j<len;j++)
        {
            ganti[i][j]= str[i][j];

        }
        ganti[i][j]='\0';
    }
    // mengubah dari yang ditampung tadi sesuai dengan kunci nya
    j=0;
    for(i=0; i<n;i++)
    {
        len = strlen(ganti[i]);
        for(l=0; l<len;l++)
        {


            if((str[i][l] <= 122)&&(str[i][l]>=97)||(str[i][l]<=90)&&(str[i][l]>=65))//jika huruf kapital dan huruf kecil
            {
                ganti[i][l]= str[i][l]-jumlah;//sebelum ubah dikurang kunci menjadi huruf baru

                if((ganti[i][l]<97)&&(str[i][l]>=97)&&(str[i][l]<=122))// untuk huruf kecil
                {
                    ganti[i][l] +=26;
                }else if((ganti[i][l]<65)&&(str[i][l]<=90)&&(str[i][l]>=65))//untuk huruf kapital
                {
                    ganti[i][l]+=26;
                }

           }else{//jika simbol selain huruf maka tidak akan diubah
                ganti[i][l]= ganti[i][l];
            }

        }


    }


printf(">> Deteksi Virus <<\n");//output sesuai permintaan
terpanjang=0;
for(i=0; i<n; i++)
{

    if(strlen(ganti[i]) > terpanjang)
    {
        terpanjang = strlen(ganti[i]);//untuk menampung string terpanjang
    }

}
// mendeteksi folder ganjil atau genap
for(i=0; i<n; i++)
{
    len = strlen(ganti[i]);
    ascii[i] =0;


        for(j=0; j<len; j++)
        {
            ascii[i] += ganti[i][j];//menjumlahkan karakter dalam string dan memasukan ke ascii
        }
        //printf("%d\n", ascii[i]);

        if(ascii[i] % 2 != 0)//jika asci ganjil maka rata kiri
        {
            printf("%s\n", ganti[i]);

        }else if(ascii[i] % 2 == 0)
        {
            for(j=0; j<terpanjang-strlen(ganti[i]); j++)//untuk folder rata kanan
            {
                printf(" ");
            }
            printf("%s\n", ganti[i]);
        }
        //printf("%s\n", ganti[i]);

}

printf("\n");
printf(">> Path Directory Asli <<\n");//output sesuai soal
printf("%s", ganti[0]);//output string pertama
for(i=1; i<n; i++)
{
    printf("\\%s", ganti[i]);//output string selanjutnya sampai beres
}
printf("\n\n");
printf(">> Kamus <<\n");

for(i=0;i<n;i++)
{
    number[i] = 1;
    printf("%d. [%s] -> [%s]\n", number[i]+i, str[i], ganti[i]);//output nomor, folder sebelum diganti dan folder sesudah diganti
}

    return 0;
}
