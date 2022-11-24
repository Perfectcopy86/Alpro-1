/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP6 Alpro (SM21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include<stdio.h>
typedef struct
{
    char kode;//variabel untuk kode makanan
    int biner[8];// variabel array untuk biner
    int ambil;//variabel untuk makanan yang diambil
    int desimal;//variabel untuk konvert ke desimal
    char huruf[100];//variabel array of char nama makanan

}data_makanan;

int main(){
    int i;
    int n;//variabel jumlah jenis makanan
    scanf("%d", &n);//inputan dari user untuk jumlah jenis makanan
    int a;
    int j;
    
    int c[n];//variabel array untuk perhitungan stok update

    char huruf2[100];//variabel array untuk kode makanan yang diambil
    int base = 1;//variabel untuk membantu konversi biner




    data_makanan jummak[n];
    int panjang[n];

    //input dari user untuk masing masing kode,biner,nama makanan, jumhlah yang diambil
    for(i=0; i<n; i++)
    {
        scanf(" %c", &jummak[i].kode);

        for(a=0; a<8; a++)
        {
            scanf("%d", &jummak[i].biner[a]);
        }

        a=0;
        while(jummak[i].huruf[a-1] != ';')
        {
            scanf(" %c", &jummak[i].huruf[a]);
            a++;
        }
        panjang[i] = a-1;
        scanf("%d", &jummak[i].ambil);

    }
    //kode ketika ada inputan'*' maka masukan user dari kode makanan yang diambil akan berhenti
     a=0;
     int batas=0;
        while(huruf2[a-1] != '*')
        {
           scanf(" %c", &huruf2[a]);
           a++;
           batas = a;
        }
        //konversi biner ke desimal
        for(i=0; i<n; i++)
        {

            int base = 1;
            jummak[i].desimal = 0;
            for(a=7; a>=0; a--)
            {
                int temp = jummak[i].biner[a];
                jummak[i].desimal = jummak[i].desimal + temp * base;
                base = base * 2;

            }

        }
        // kode untuk menghitung stok update
        int nampung[n];//array untuk hasil akhir setelah penghitungan dari seluruh operasi selesai
        for(i=0; i<n; i++)
        {
            c[i]=0;//variabel untuk menampung jika ada kode makanan dan kode makanan yang diambil yang sama
        }
        for(i=0; i<n; i++)
            {

                for(a=0; a<50; a++)
                {
                    if(huruf2[a] == jummak[i].kode)
                    {
                        c[i] +=1;

                    }

                }

                nampung[i]= jummak[i].desimal - jummak[i].ambil * c[i];

            }
            //kode ketika hasil akhir nya negatif namun karena ini barang maka tidak ada yang negatif
            i=0;
            while(i<n)
            {
                if(nampung[i]<0)
                {
                    nampung[i]=0;
                }
                i++;
            }


        //menampilkan stok awal makanan
        printf("Stok Makanan Awal\n");


        if(huruf2[0] == '*')//jika inputan awal adalah * maka akan print stok tetap
        {
        for(i=0; i<n; i++)
            {
                printf("- %c ",jummak[i].kode);//menampilkan kode makanan
        for(a=0; a<panjang[i]; a++)
            {
            printf("%c",  jummak[i].huruf[a]);//menampilkan nama makanan
            }
        for(j=1; j<2; j++)
            {
            printf(" %d", jummak[i].desimal);//menampilkan stok makanan berupa angka
            }
        printf("\n");
            }
            printf("\n");
            printf("---Stok Tetap---\n");
        }


        else//jika inputan awal bukan * maka akan print stok update
        {


            //menampilkan stok awal
            for(i=0; i<n; i++)
            {
                printf("- %c ",jummak[i].kode);//menampilkan kode makanan
            for(a=0; a<panjang[i]; a++)
            {
                printf("%c",  jummak[i].huruf[a]);//menampilkan nama makanan
            }
            for(j=0; j<1; j++)
            {
                printf(" %d", jummak[i].desimal);//menampilkan stok makanan berupa angka
            }

            printf("\n");
            }
            printf("\n");
            //menampilkan stok update
            printf("Stok Makanan Update\n");
            for(i=0; i<n; i++)
            {
                printf("- %c ",jummak[i].kode);//menampilkan kode makanan
            for(a=0; a<panjang[i]; a++)
            {
                printf("%c",  jummak[i].huruf[a]);//menampilkan nama makanan
            }


            for(j=0; j<1; j++)
            {

                printf(" %d", nampung[i]);//menampilkan stok makanan berupa angka yang sudah diupdate



            }
            printf("\n");
            }


        }

    return 0;
}
