/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP4 Alpro (PRK21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>

int main(){
    char huruf;//varibel untuk huruf
    int i;//variabel untuk baris
    int j;// variabel untuk kolom
    int size;// variabel untuk ukuran pola
    int genap = 0;//variabel untuk angka genap
    int ganjil= 1;//variabel untuk angka ganjil
    scanf("%c", &huruf);//input dari user berupa huruf
    scanf("%d", &size);//input dari user berupa angka



    for(i=0; i<size; i++){//pola baris pertama
                printf("");
                //memulai spasi
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
            }//spasi selesai


            for(j=0; j<=i; j++){//membuat pola telinga kiri
                printf("*");
            }
            // memulai spasi untuk telinga kiri
            for(j=size-2; j>=1; j--){
                printf(" ");
            }
            for(j=0; j<size; j++){
                printf(" ");
            }
            for(j=0; j<size; j++){
                printf(" ");
            }//spasi selesai

            //memulai spasi untuk telinga kanan
            for(j=size-i; j>=1; j--){
                printf(" ");
            }
            for(j=size-i; j>=1; j--){
                printf(" ");
            }//spasi selesai
            for(j=0; j<=i; j++){//membuat pola telinga kanan
                printf("*");
            }


            printf("\n");

    }
    for(i=1; i<size; i++){//pola baris kedua

            for(j=0; j<size; j++){//pola untuk ekor
                printf("*");
            }
            //mulai spasi
            for(j=0; j<size; j++){
                printf(" ");
            }
            for(j=0; j<size; j++){
                printf(" ");
            }
            for(j=0; j<size; j++){
                printf(" ");
            }
            //spasi beres

            //membuat pola
            for(j=0; j<size; j++){
                printf("*");
            }
            for(j=0; j<size; j++){
                printf("*");
            }
            for(j=0; j<size; j++){
                printf("*");
            }
            for(j=0; j<size; j++){
                printf("*");
            }
            for(j=0; j<size; j++){
                printf("*");
            }

            printf("\n");
    }

    for(i=0; i<1; i++){//pola baris ketiga
        //membuat pola
        for(j=0; j<size; j++){
            printf("*");
        }
        //mulai spasi
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf(" ");
        }//spasi beres

        //membuat pola
        for(j=0; j<size; j++){
            printf("*");
        }
        //spasi
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        //spasi
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }


        printf("\n");
    }
    for(i=0; i<1; i++){//pola baris ke empat
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }

        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf(" ");
        }//beres
        for(j=0; j<size; j++){
            printf("*");
        }
        //spasi
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        //spasi
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }


        printf("\n");
    }
    for(i=1; i<size; i++){//pola baris ke lima
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }


        printf("\n");
    }
    for(i=0; i<size; i++){//pola baris ke enam
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }



        if((huruf != 'a') &&(huruf != 'i')&& (huruf != 'u')&&(huruf != 'e')&&(huruf!='o'))//syarat untuk huruf konsonan bernilai genap
        {
                for(j=1; j<=size; j++)
                    {
                        if((genap >= 0)&&(genap <= 8))//batasan nilai genap
                        {
                    printf("%d", genap );
                    genap += 2;

                        }   else if(genap > 8)
                            {
                            genap = genap % 10;//untuk mengambil nilai sisa yang dijadikan nilai genap
                            printf("%d", genap);
                            genap += 2;
                            }
                    }
        }
            else if((huruf == 'a') ||(huruf == 'i')|| (huruf == 'u')||(huruf == 'e')||(huruf=='o'))//syarat untuk huruf vokal bernilai ganjil
        {
            {
            for(j=1; j<=size; j++)
                {
                if((ganjil >= 1) &&(ganjil<=9))//batasan untuk nilai ganjil
                    {
                    printf("%d", ganjil);
                    ganjil += 2;
                    }else if(ganjil > 9)
                        {
                        ganjil = ganjil % 10;//untuk mengambil nilai sisa yang dijadikan nilai ganjil
                        printf("%d", ganjil);
                        ganjil += 2;
                        }
                }
            }
        }

        for(j=0; j<size; j++){
            printf("*");
        }


        printf("\n");
    }

    for(i=0; i<size; i++){//pola baris ke tujuh
        //pola membuat kaki
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<size; j++){
            printf("*");
        }

        for(j=0; j<size; j++){
            printf(" ");
        }
         for(j=0; j<size; j++){
            printf("*");
        }//pola kaki selesai

        //pola bawah yg berbentuk love
        for(j=0; j<size; j++){
            printf(" ");
        }

        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf(" ");
        }
        for(j=size-2; j>=i; j--){
            printf("*");
        }
        for(j=0; j<size; j++){
            printf("*");
        }
        for(j=size-2; j>=i; j--){
            printf("*");
        }


        printf("\n");
    }

    return 0;
}
