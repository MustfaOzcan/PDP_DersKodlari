#include "stdio.h"
#include "conio.h"


typedef enum{false,true}boolean;//0 false, 1 true
int main(){

const double g=10;
printf("g:");
scanf("%lf",&g);
double a=5;
double f=g*a;
printf("kuvvet: %lf",f);




/*double pi=3.14;
int x=pi;
printf("%d",x);



float x=10;
float y=3;
double a=10;
double b=3;

float z=x/y;
double c=a/b;

if(z==c)
printf("eseit");
else
printf("esit degil.",z,c);

return 0; 

*/
/*	

	int x=100;
	int y=100000;
	printf("x: %d",sizeof (x));//4 byte 
	printf("\ny: %d",sizeof(y));//4 byte 


*/


	
	
	boolean kontrol;//boolean türünde kontrol değişkeni 
	kontrol=true;

	if(kontrol)
	printf("kontrol calisti.");
	else
	printf("kontrol calismaz.");



	/*char x='\b';//bir imlec sola bas

	printf("Sakarya%c%c",x,x);
	getch();
	//Scanf(); bu tarz bi sey de kullanılabilir.
	*/
	return 0;
}