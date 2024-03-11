#include "stdio.h"
int main()
{
    /* or 1
    int s[]={10,2,63,14,48,39,74,12};
    int sayi;

    printf("Aranan sayi : ");

    scanf("%d",&sayi);
    for(int index=0;index<8;index++)
    {
        if(s[index]==sayi)
        {
            printf("sayi var");
            break;
        }
    }
   */

    /*or2
    //sonsuz dongu,ctrl c durduruyor
    int s[]={10,2,63,14,48,39,74,12};
    while(1)
    {printf(":) ");

    }
    */

   /*or3

   double toplamAgirlik;
   double agirlik;

   do{
    printf("agirlik gir:");
    scanf("%lf",&agirlik);
    if(agirlik<=0) continue;//agirlik 0 dan kücükse devam et 
    if(toplamAgirlik+agirlik>100) break;//sart saglanirsa donguden cik 
    toplamAgirlik+=agirlik;
   }while(toplamAgirlik<=100);
   printf("toplam agirlik :%lf",toplamAgirlik);//toplam agirlik 100'den büyük olamaz.
    */

   printf("                          CASRPIM TABLOSU\n");
		 printf("------------------------------------------------------\n");
		 printf("# | ");
		 for(int i=1;i<=9;i++) {
			 printf("  %d",i);
		 }
		 printf("\n------------------------------------------------------\n");

		 for(int i =1;i<=9;i++){//satirda gidiyor

			 printf("%d | ",i);
			 for(int j=1;j<=9;j++)//sütunda gidiyor
			 {
				 if(i*j<10) printf("  %d",(i*j));//i*j degeri 10 küçükse iki boşluk birak
				 else {
					 printf(" %d",(i*j));//degilse tek bosluk birak
				 }
			 }
			 printf("\n");
		 }
	

	
////////////////////////////go to etiketi
/*
 printf("                          CASRPIM TABLOSU\n");
		 printf("------------------------------------------------------\n");
		 printf("# |");
		 for(int i=1;i<=9;i++) {
			 printf("  %d",i);
		 }
		 printf("\n------------------------------------------------------\n");
		
		 for(int i =1;i<=9;i++){//satirda gidiyor

			 printf("%d | ",i);
			 for(int j=1;j<=9;j++)//sütunda gidiyor
			 {
				 if(i*j<10) printf("  "+(i*j));//i*j degeri 10 küçükse iki boşluk birak
				 else {
					goto a; //a etiketine sicrar
					
					
				 }
			 }
			 printf("\n");

		 }
			 a:
			 //a etiket "goto a" kismi etikete sicriyor


	*/	

 return 0 ;
}