/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP7 Alpro (EPCA21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>

int main(){

char name[50];//variabel untuk kata utama
char key[50];//variabel untuk copy kata utama
char name3[50];//variabel untuk huruf kunci
int i;
int j;
int salah;//variabel untuk menampung sementara


scanf("%s", &name);//inputan user
i=0;//inisialisasi
j=0;//inisialisasi
do{

key[i] = name[j];//masukan kata utama dan kunci ke variabe lain
i++;//iterasi
j++;//iterasi
}while(i<strlen(name) && name[i] != '!');//kondisi akan berhenti ketika bertemu '!''
key[i] = '\0';//menghilangkan bagian tidak penting
//printf("%s", key);
int panjang, nampung;//variabel nampung 
i=0;//inisialisasi
while(i<strlen(name))
{
    if(name[i] == '!')//kondisi setelah '!'
    {
        nampung = i;
        salah = 1;
    }
    i++;//iterasi
}

i=nampung+1;//untuk deklarasi setelah '!'
j=0;//inisialisasi
while(i<strlen(name))
{
    name3[j]=name[i];//memasukan kata kunci ke variabel lain
    i++;//iterasi
    j++;//iterasi
}
name3[j] = '\0';//menghilangkan bagian yang tidak perlu

//printf("%d\n%s\n%s", nampung, name3, key);
// kode untuk menghilangkan  bagian dari kata utama dengan huruf yang diinginkan(kata kunci) 
int panjangnama= strlen(key);
int k=0, l=0;
int panjangilang= strlen(name3);

for(i=0; i<panjangnama; i++)
{
    if(key[i]==name3[k])
    {
        k++;
    }else if(key[i]==name3[0])
    {
        k=1;
    }else
    {
        k=0;
    }
    if(name3[k]=='\0')
    {
        i= i+1-k;
        for(l=i; l<panjangnama; l++)
        {
            key[l]= key[l+panjangilang];
        }
        panjangnama -= panjangilang;
        k=0;
        i--;

    }

}
//key[l] = '\0';
//printf("%s", key);


if((salah == 0)||(panjangnama==0))//jika tidak ada tanda '!' dan kata kosong sama sekali 
{
    printf("==== Inputan Tidak Valid! ====\n");//output sesuai syarat
}else//kondisi jika if tidak terpenuhi
{
    printf("Tanpa kunci: %s\n\n", key);
    printf("Enkripsi 1:\n");
    
        //pola zigzag, print bagian atas
        i=strlen(key)-1;
        printf("%c", key[i]);
        i=strlen(key)-3;
        while(i>=0)
        {
            printf(" %c", key[i]);

            i-=2;
        }

    printf("\n");
    //pola zigzag, print bagian bawah
    i=strlen(key)-2;
    while(i>=0)
    {
        printf(" %c", key[i]);
        i-=2;
    }
    printf("\n\n");
    //print enkripsi dua sesuai dengan yang diminta
    printf("Enkripsi 2: ");
    i=strlen(key)-1;
        while(i>=0)
        {
            printf("%c", key[i]);
            i-=2;
        }

       
    i=strlen(key)-2;
    while(i>=0)
    {
        printf("%c", key[i]);
        i-=2;
    }
    printf("\n");

}

    return 0;
}
