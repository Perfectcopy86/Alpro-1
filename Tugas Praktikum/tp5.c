/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP5 Alpro (KTDE21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include<stdio.h>

int main(){
	int n;//variabel untuk huruf
	int i;//variabel untuk array i
	int j;// variabel untuk array j
	int sum1;//variabel untuk jumlah array pertama
	int sum2;//variabel untuk jumlah array kedua
	int nilai;// variabel untuk mengubah kode ascii ke range 1-9

	scanf("%d", &n);//input user untuk jumlah kotak

	char arr[n];//array berupa karakter

	sum1=0;//deklarasi jumlah pertama = 0
	for(i=0; i<n; i++)
	{

        scanf(" %c", &arr[i]);//input dari user berupa huruf
        if(arr[i]>=65 && arr[i]<=73)//deklarasi kode ascii A-I
        {
            nilai= arr[i];
            nilai -= 64;//mengubah kode ascii ke nilai dengan range 1-9 
        }else if(arr[i]>=74 && arr[i]<=82)//deklarasi kode ascii J-R
        {
            nilai= arr[i];
            nilai -= 73;//mengubah kode ascii ke nilai dengan range 1-9 
        }else if(arr[i]>=83 && arr[i]<=90)//deklarasi kode ascii S-Z
        {
            nilai= arr[i];
            nilai -= 82;//mengubah kode ascii ke nilai dengan range 1-9 
        }
		sum1+= nilai;//menjumlahkan nilai dari konversi ascii ke range nilai1-9

	}


    int m;//variabel untuk angka
	scanf("%d", &m);//input user untuk jumlah kotak

	int arrm[m];//array untuk angka

	sum2=0;//deklarasi jumlah kedua = 0
	for(j=0; j<m; j++)
	{
		scanf("%d", &arrm[j]);//input dari user berupa huruf
		sum2+= arrm[j];//menjumlahkan nilai dari konversi ascii ke range nilai1-9
	}




    if(n==m)//untuk jumlah kotak huruf sama dengan kotak angka
    {
        printf("%c %d", arr[0], arrm[0]);//menampilkan output dari masing-masing kotak pertama
    	for(i=1; i<n; i++)
    	{
            printf(" %c %d", arr[i], arrm[i]);//menampilkan output dari masing-masing kotak selanjutnya
    	}
    printf("\n");

	 if(sum1 == sum2)//untuk jumlah nilai yang sama maka akan masuk syarat 
        {
		printf("Nilai kartu mereka sama,\n");//output jika memenuhi syarat
		printf("Ada rasa suka di antara mereka.\n");//output jika memenuhi syarat
        }else{//untuk jumlah nilai yang tidak sama, maka tidak memenuhi syarat
        printf("Nilai kartu mereka tidak sama,\n");//output jika tidak memenuhi syarat
        printf("Mereka cukup berteman baik saja.\n");//output jika tidak memenuhi syarat
        }

    }else{//untuk jumlah kotak yang tidak sama
        printf("Jumlah kartu mereka tidak sama,\n");//output jika tidak memenuhi syarat
        printf("Pertemanan mereka tidak akan serasi.\n");//output jika tidak memenuhi syarat
    }
	return 0;
}
