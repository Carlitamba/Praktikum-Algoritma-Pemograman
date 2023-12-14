#include <stdio.h>

int main(){
	printf("Created by Carli Tamba\n");
	printf("NIM : 23343031\n\n");	
	int nilaiKehadiran,nilaiTugas,nilaiUTS,nilaiUAS,nilaiAkhir;
	
	printf("Masukkan nilai kehadiran,nilai tugas,nilai UTS,nilai UAS contoh(100 80 70 50): ");
	scanf("%d %d %d %d",&nilaiKehadiran,&nilaiTugas,&nilaiUTS,&nilaiUAS);
	nilaiAkhir=(nilaiKehadiran*20/100)+(nilaiTugas*20/100)+(nilaiUTS*25/100)+(nilaiUAS*35/100);

	if(nilaiAkhir>=0&&nilaiAkhir<=44 ){
		printf("Nilai akhir adalah E");
		printf("\nMaaf,anda tidak lulus!");
	}else if(nilaiAkhir>=45&&nilaiAkhir<=55){
		printf("Nilai akhir adalah D");
		printf("\nMaaf,anda tidak lulus!");		
	}else if(nilaiAkhir>=56&&nilaiAkhir<=65){
		printf("Nilai akhir adalah C");
		printf("\nAnda lulus,tingkatkan lagi untuk kedepannya");
	}else if(nilaiAkhir>=66&&nilaiAkhir<=75){
		printf("Nilai akhir adalah B-");
		printf("\nAnda lulus dengan baik,tingkatkan terus belajarnya");
	}else if(nilaiAkhir>=76&&nilaiAkhir<=80){
		printf("Nilai akhir adalah B");
		printf("\nAnda lulus dengan baik,tingkatkan terus belajarnya");
	}else if(nilaiAkhir>=81&&nilaiAkhir<=85){
		printf("Nilai akhir adalah B+");
		printf("\nAnda lulus dengan baik,tingkatkan terus belajarnya");
	}else if(nilaiAkhir>=86&&nilaiAkhir<=90){
		printf("Nilai akhir adalah A-");
		printf("\nSelamat!Anda lulus dengan nilai yang sangat memuaskan");
	}else if(nilaiAkhir>=91&&nilaiAkhir<=100){
		printf("Nilai akhir adalah A");
		printf("\nSelamat!Anda lulus dengan nilai yang sangat memuaskan");
	}else{
		printf("Masukkan nilai dengan benar!");
	}
	return 0;
}


