/*Saya Rasyid Andriansyah NIM 2101963 mengerjakan evaluasi TP2 Alpro (RS21) dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>

int main(){
	char aa, bb, cc, dd, ee, ff;//Kotak untuk menampung input dari user berupa huruf
	int gg;//Kotak untuk menampung input dari user berupa angka



	scanf("%c\n", &aa);//untuk memasukkan huruf

	scanf("%c\n", &bb);//untuk memasukkan huruf

	scanf("%c\n", &cc);//untuk memasukkan huruf

	scanf("%c\n", &dd);//untuk memasukkan huruf

	scanf("%c\n", &ee);//untuk memasukkan huruf

	scanf("%c\n", &ff);//untuk memasukkan huruf

	scanf("%d", &gg);//untuk memasukkan angka

	
 	int a = 0;//variabel untuk menghitung jumlah vokal
 	int b = 0;//variabel untuk menghitung jumlah konsonan

 	//pengecekkan huruf vokal
 	if((aa == 'A') || (aa == 'I') || (aa = 'U') || (aa == 'E') || (aa == 'O')){
 		a += 1;
 	}
 	//pengecekkan huruf konsonan
 	if((bb != 'A') && (bb != 'I') && (bb != 'U') && (bb != 'E') && (bb != 'O')){
 		b += 1;
 	}
	if((a += 3) && (b += 3) && (gg %2 == 0)){/*syarat satu : bahwa harus 3 konsonan dan 3 vocal
		dan berangka genap*/

        printf("Riddle Stone Acquired! Everybody comes home\n");//menampilkan hasil jika syarat satu terpenuhi

	}else if((a += 4) && (b -= 4) && (gg % 2 != 0)){/*melanjutkan ke syarat dua jika syarat satu tidak
			terpenuhi, syarat dua : bahwa huruf vocal lebih dari 3, maka angka harus ganjil*/ 

        printf("Riddle Stone Acquired! Everybody comes home\n");//menampilkan hasil jika syarat dua terpenuhi

	}else if ((b += 4) && (a -= 4) && (gg == 0)){/*melanjutkan ke syarat tiga jika 
		syarat dua tidak terpenuhi, syarat tiga : bahwa huruf konsonan lebih dari 3, maka angka harus nol*/

        printf("Riddle Stone Acquired! Everybody comes home\n");//menampilkan hasil jika syarat tiga terpenuhi

	}




	else{//melanjutkan jika tidak ada syarat yang terpenuhi
        printf("You are unworthy, for you cannot riddle me\n");//menampilkan hasil jika tidak ada syarat yang terpenuhi
	}



	return 0;
}
