/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP9 Alpro (BRCM21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

void kekuatanboss(char str8[], char str9[])
{
	int i;
	int ascii1;
	int ascii2;
	ascii1 =0;
	ascii2 =0;
	int power;

	for(i=0; i<strlen(str8); i++)
	{
   		ascii1 += str8[i];//menjumlahkan karakter dalam string dan memasukan ke ascii
    }
    for(i=0; i<strlen(str9); i++)
	{
   		ascii2 += str9[i];//menjumlahkan karakter dalam string dan memasukan ke ascii
    }

    power = ascii1 - (ascii2 / strlen(str9));//rumus untuk mencari power boss
    if(power<0)
    {
    	powerakhir = power * -1;//jika kekuatan bernilai negatif maka akan diubah jadi positif
    }else
    {
       powerakhir = power * 1;//jika positif tetap positif
    }

    printf("Kekuatan Boss: %d\n=====================\n", powerakhir);


}

void kekuatankarakter1(char str10[][50], char str11[][50], int ascii3[], int ascii4[], int n, int power1[], int powerakhir2[])
{
	int i;
	int j;
	for(i=0; i<n; i++)
	{
	ascii3[i] =0;
	ascii4[i] =0;
    power1[i] =0;
	powerakhir2[i] =0;

	for(j=0; j<strlen(str10[i]); j++)
	{
   		ascii3[i] += str10[i][j];//menjumlahkan karakter dalam string dan memasukan ke ascii
    }
    for(j=0; j<strlen(str11[i]); j++)
	{
   		ascii4[i] += str11[i][j];//menjumlahkan karakter dalam string dan memasukan ke ascii
    }

    power1[i] = ascii3[i] - (ascii4[i] / strlen(str11[i]));//rumus untuk mencari power boss
    if(power1[i]<0)
    {
    	powerakhir2[i] = power1[i] * -1;//jika kekuatan bernilai negatif maka akan diubah jadi positif
    }else
    {
       powerakhir2[i] = power1[i] * 1;//jika positif tetap positif
    }
	}
	// for(i=0; i<n; i++)
	// {
	// 	printf("%d\n", powerakhir2[i]);
	// }

}

void elemen(char str6[], char str3[][50], int tandaele[], int n)
{
	int cmp1,cmp2,cmp3,cmp4,cmp5;
	int i;
	//membandingkan masukan boss dengan elemen 
	cmp1 = strcmp(str6, "Fire");
	cmp2 = strcmp(str6, "Wind");
	cmp3 = strcmp(str6, "Lightning");
	cmp4 = strcmp(str6, "Earth");
	cmp5 = strcmp(str6, "Water");
	
	if(cmp1 == 0)
	{
		for(i=0; i<n; i++)
		{
			tandaele[i] =0;
			if(strcmp(str3[i], "Water") == 0)
			{
				tandaele[i] = 2;// jika 2 artinya karakter menang
			}else if(strcmp(str3[i], "Wind") == 0){
				tandaele[i] = 1;// jika 1 artinya karakter kalah
			}
		}
	}
	else if(cmp2 == 0)
	{
		for(i=0; i<n; i++)
		{
			tandaele[i] =0;
			if(strcmp(str3[i], "Fire")==0)
			{
				tandaele[i] = 2;// jika 2 artinya karakter menang
			}else if(strcmp(str3[i], "Lightning") == 0){
				tandaele[i] = 1;// jika 1 artinya karakter kalah
			}
		}
	}
	else if(cmp3 == 0)
	{
		for(i=0; i<n; i++)
		{
			tandaele[i] =0;
			if(strcmp(str3[i], "Wind")==0)
			{
				tandaele[i] = 2;// jika 2 artinya karakter menang
			}else if(strcmp(str3[i], "Earth") == 0){
				tandaele[i]= 1;// jika 1 artinya karakter kalah
			}
		}
	}
	else if(cmp4 == 0)
	{
		for(i=0; i<n; i++)
		{
			tandaele[i] =0;
			if(strcmp(str3[i], "Lightning")==0)
			{
				tandaele[i] = 2;// jika 2 artinya karakter menang
			}else if(strcmp(str3[i], "Water") == 0){
				tandaele[i]= 1;// jika 1 artinya karakter kalah
			}
		}
	}
	else if(cmp5 == 0)
	{
		for(i=0; i<n; i++)
		{
			tandaele[i] =0;
			if(strcmp(str3[i], "Earth")==0)
			{
				tandaele[i] = 2;// jika 2 artinya karakter menang
			}else if(strcmp(str3[i], "Fire") == 0){
				tandaele[i]= 1;// jika 1 artinya karakter kalah
			}
		}
	}else
	{
		for(i=0; i<n; i++)
		{
			tandaele[i]=0;// jika 0 artinya elemen sama dan tidak ada yg kalah menang
		}
	}
	// for(i=0; i<n; i++)
	// 	{
	// 		printf("%d\n", tandaele[i]);
	// 	}
}

void kekuatankarakter2(int powerakhir2[], int tandaele[], int n)
{
    int i;
	for(i=0; i<n; i++)
		{
			if(tandaele[i] == 2)//syarat jika menang dan tambah kuat pake obat kuat
			{
				powerakhir2[i] = powerakhir2[i]+ (powerakhir2[i] * 40/100);
			}else if(tandaele[i] == 1)//syarat jika kalah dan tambah kuat pake racun
			{
				powerakhir2[i] = powerakhir2[i]- (powerakhir2[i] * 30/100);
			}else if(tandaele[i] == 0){
				powerakhir2[i] == powerakhir2[i];
			}
		}
		// for(i=0; i<n; i++)
		// {
		// 	printf("%d\n", powerakhir2[i]);
		// }
}

void superior(char str2[][50], int powerakhir2[], int n)
{
	int i, apadong ;//apa hayoooo yaa ngeprint lah
	printf("Superior\n=====================\n---------------------\n");
	apadong =0;
	for(i=0; i<n; i++)
	{
		if(powerakhir2[i]>powerakhir)
		{
			printf("%s %d\n", str2[i], powerakhir2[i] );
			apadong ++;
		}

	}
	if(apadong == 0)
		{
			printf("Tidak ada karakter Superior\n");
		}


	
    

	printf("---------------------\n=====================\nInferior\n=====================\n---------------------\n");
	apadong=0;
	for(i=0; i<n; i++)
	{
		if(powerakhir2[i]<powerakhir)
		{
			printf("%s %d\n", str2[i], powerakhir2[i] );
			apadong ++;
		}
	}
	
	if(apadong==0)
		{
			printf("Tidak ada karakter Inferior\n");
		}
    
	printf("---------------------\n");

}
