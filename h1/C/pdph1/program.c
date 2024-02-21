#include "stdio.h"//standart input output
#include "conio.h"//getch();
//4 basamaklı sayıların basamaklarına ayrılması
int main(){
	int sayi;
	do{
		printf("Dort basamakli sayi :");
		scanf("%d",&sayi);//adresine git kopyala
		
	}while(sayi>9999 || sayi<1000);//döngüde kal
	
	short birler,onlar,yuzler,binler;
	binler=sayi/1000;
	yuzler=(sayi%1000)/100;
	onlar=(sayi%100)/10;
	birler=sayi%10;
	
	printf("binler: %d",binler);
	printf("yuzler: %d",yuzler);
	printf("onlar: %d",onlar);
	printf("birler: %d",birler);
	getch();
	return 0;
}
