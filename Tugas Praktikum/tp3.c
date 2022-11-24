/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi Tugas Praktikum 3 (PRB221) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


#include <stdio.h>
#include <math.h>
//membuat tipe bentukan untuk titik koordinat
typedef struct{
    int x;
    int y;


}titik;

int main()
{   //membuat bungkusan dalam main
    titik A;
    titik B;
    titik C;
    int kuadran;//variabel untuk kuadran
    int persen;//variabel untuk persen
    int ribuan, ratusan, puluhan, satuan;//variabel ribuan ratusan ribuan satuan
    float persenluas;//varibel untuk mencari persen dari luas
    float tinggi, alas;// variabel untuk tinggi dan alas
    float luas;//variabel untuk luas segitiga

    //memasukan input dari user
    scanf("%d %d %d %d %d %d %d %d", &kuadran, &A.x, &A.y, &B.x, &B.y, &C.x, &C.y, &persen);
    if(kuadran >= 9999){
        printf("Kuadran tidak valid!\n");
        printf("A: %d, %d\n", A.x, A.y);
        printf("B: %d, %d\n", B.x, B.y);
        printf("C: %d, %d\n", C.x, C.y);
        tinggi = A.y - C.y;//rumus mencari tinggi dalam satuan bukan koordinat
        if(tinggi > 0){
            tinggi = tinggi * 1;
        }else{
            tinggi = tinggi * -1;
        }

        alas = B.x - C.x;//rumus mencari alas dalam satuan bukan koordinat
        if(alas > 0){
            alas = alas * 1;
        }else{
            alas = alas * -1;
        }

        luas = (alas * tinggi) / 2;//rumus luas segitiga
        printf("Luas: %.2fcm2\n", luas);//output luas segitiga



        persenluas = (persen  * luas) / 100;//rumus untuk mencari "n" persen dari luas segitiga
        printf("Luas %d%%: %.2fcm2\n", persen, persenluas);//output persen dari luas
    }else if( kuadran <= 999){

        printf("Kuadran tidak valid!\n");
        printf("A: %d, %d\n", A.x, A.y);
        printf("B: %d, %d\n", B.x, B.y);
        printf("C: %d, %d\n", C.x, C.y);
        tinggi = A.y - C.y;//rumus mencari tinggi dalam satuan bukan koordinat
        if(tinggi > 0){
            tinggi = tinggi * 1;
        }else{
            tinggi = tinggi * -1;
        }

        alas = B.x - C.x;//rumus mencari alas dalam satuan bukan koordinat
        if(alas > 0){
            alas = alas * 1;
        }else{
            alas = alas * -1;
        }

        luas = (alas * tinggi) / 2;//rumus luas segitiga
        printf("Luas: %.2fcm2\n", luas);//output luas segitiga



        persenluas = (persen  * luas) / 100;//rumus untuk mencari "n" persen dari luas segitiga
        printf("Luas %d%%: %.2fcm2\n", persen, persenluas);//output persen dari luas

    }else{
    //mencari bilangan satuan untuk menentukan kuadran
    ribuan = kuadran / 1000;
    ratusan = (kuadran - ribuan * 1000) / 100;
    puluhan = (kuadran - ribuan * 1000 - ratusan  * 100)/ 10;
    satuan = (kuadran - ribuan * 1000 - ratusan * 100 - puluhan * 10 );

    kuadran = satuan;


    // menggunakan switch untuk deskripsi dari kuadran
    switch(kuadran)
    {
        //case 1 untuk kuadran satu, dimana titik x dan y harus bernilai positif
        case 1:

            if(A.x > 0){
                A.x = A.x * 1;
            }else{
                A.x = A.x * -1;
            }
            if(A.y > 0){
                A.y = A.y * 1;
            }else{
                A.y = A.y * -1;
            }
            if(B.x > 0){
                B.x = B.x * 1;
            }else{
                B.x = B.x * -1;
            }
            if(B.y > 0){
                B.y = B.y * 1;
            }else{
                B.y = B.y * -1;
            }
            if(C.x > 0){
                C.x = C.x * 1;
            }else{
                C.x = C.x * -1;
            }
            if(C.y > 0){
                C.y = C.y * 1;
            }else{
                C.y = C.y * -1;
            }
            //menampilkan output dari case 1
            printf("A: %d, %d\n", A.x, A.y);
            printf("B: %d, %d\n", B.x, B.y);
            printf("C: %d, %d\n", C.x, C.y);

            break;

            //case 2 untuk kuadran dua, dimana titik x bernilai negatif dan y harus bernilai positif
        case 2:

            if(A.x > 0){
                A.x = A.x * -1;
            }else{
                A.x = A.x * 1;
            }
            if(A.y > 0){
                A.y = A.y * 1;
            }else{
                A.y = A.y * -1;
            }
            if(B.x > 0){
                B.x = B.x * -1;
            }else{
                B.x = B.x * 1;
            }
            if(B.y > 0){
                B.y = B.y * 1;
            }else{
                B.y = B.y * -1;
            }
            if(C.x > 0){
                C.x = C.x * -1;
            }else{
                C.x = C.x * 1;
            }
            if(C.y > 0){
                C.y = C.y * 1;
            }else{
                C.y = C.y * -1;
            }

             //menampilkan output dari case 2
            printf("A: %d, %d\n", A.x, A.y);
            printf("B: %d, %d\n", B.x, B.y);
            printf("C: %d, %d\n", C.x, C.y);

            break;


        //case 3 untuk kuadran tiga, dimana titik x dan y harus bernilai negatif
        case 3:

            if(A.x > 0){
                A.x = A.x * -1;
            }else{
                A.x = A.x * 1;
            }
            if(A.y > 0){
                A.y = A.y * -1;
            }else{
                A.y = A.y * 1;
            }
            if(B.x > 0){
                B.x = B.x * -1;
            }else{
                B.x = B.x * 1;
            }
            if(B.y > 0){
                B.y = B.y * -1;
            }else{
                B.y = B.y * 1;
            }
            if(C.x > 0){
                C.x = C.x * -1;
            }else{
                C.x = C.x * 1;
            }
            if(C.y > 0){
                C.y = C.y * -1;
            }else{
                C.y = C.y * 1;
            }
             //menampilkan output dari case 3
            printf("A: %d, %d\n", A.x, A.y);
            printf("B: %d, %d\n", B.x, B.y);
            printf("C: %d, %d\n", C.x, C.y);

            break;
        //case 4 untuk kuadran 4, dimana titik x bernilai positif dan y bernilai negatif
        case 4:

            if(A.x > 0){
                A.x = A.x * 1;
            }else{
                A.x = A.x * -1;
            }
            if(A.y > 0){
                A.y = A.y * -1;
            }else{
                A.y = A.y * 1;
            }
            if(B.x > 0){
                B.x = B.x *1;
            }else{
                B.x = B.x * -1;
            }
            if(B.y > 0){
                B.y = B.y * -1;
            }else{
                B.y = B.y * 1;
            }
            if(C.x > 0){
                C.x = C.x * 1;
            }else{
                C.x = C.x * -1;
            }
            if(C.y > 0){
                C.y = C.y * -1;
            }else{
                C.y = C.y * 1;
            }

             //menampilkan output dari case 4
            printf("A: %d, %d\n", A.x, A.y);
            printf("B: %d, %d\n", B.x, B.y);
            printf("C: %d, %d\n", C.x, C.y);

            break;


        default :// jika tidak ada case yg sesuai
            A.x = A.x;
            A.y = A.y;
            B.x = B.x;
            B.y = B.y;
            C.x = C.x;
            C.y = C.y;

             //menampilkan output jika tidak ada yang sesuai
            printf("Kuadran tidak valid!\n");
            printf("A: %d, %d\n", A.x, A.y);
            printf("B: %d, %d\n", B.x, B.y);
            printf("C: %d, %d\n", C.x, C.y);
            break;
    }



    tinggi = A.y - C.y;//rumus mencari tinggi dalam satuan bukan koordinat
    if(tinggi > 0){
        tinggi = tinggi * 1;
    }else{
        tinggi = tinggi * -1;
    }

    alas = B.x - C.x;//rumus mencari alas dalam satuan bukan koordinat
    if(alas > 0){
        alas = alas * 1;
    }else{
        alas = alas * -1;
    }

    luas = (alas * tinggi) / 2;//rumus luas segitiga
    printf("Luas: %.2fcm2\n", luas);//output luas segitiga



    persenluas = (persen  * luas) / 100;//rumus untuk mencari "n" persen dari luas segitiga
    printf("Luas %d%%: %.2fcm2\n", persen, persenluas);//output persen dari luas



    return 0;
    }
}
