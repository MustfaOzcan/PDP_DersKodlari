#include "stdio.h"
#include "stdlib.h"


/*const char* f1()
{
	const char* sehir="Sakarya";
	return sehir;

}
*/
//yok edilecek dizi ilk adresini donderiyoruz.(f2 icin)
//local 
/* char* f2()
{
	 char sehir[]="Ankara";
	return sehir;

}
*/
int main()
{	
	
	/*or1
	int a[5];//5 hucre olustur 
	a[0]=250;
	a[1]=400;

	int *p;
	p=a;//a nin adres i p'ye ata
	p++;//adresi arttır (bir sonraki hucre)
	printf("%X :",a[2]);
	printf("%d",*p);
	*/
	
	/*or2
	const *isim="Mehmet";//char pointer (string olarak kullaniliyor.) string turu yok c dilinde
	printf("%s",isim);//s-->string yaziyor
	printf("%c",*isim);//c-->char bir karakter yaziyor
	*/
	
	/*or3  char str[]={'S','A','U'};
	printf("%c",str[1]);

	*/

	/*or4
	printf("sehir1 :%s\n",f1());
	printf("sehir2 :%s",f2());

	*/
	
	/*or5

	int a=100,b=50;
	int *s1,*s2;
	s1=&a;
	s2=&b;
	int *yedek;
	printf("a:%d :\n",*s1);
	printf("b:%d :\n",*s2);

	//swap islemleri
	yedek=s1;
	s1=s2;
	s2=yedek;

	printf("a:%d :\n",*s1);
	printf("b:%d :\n",*s2);
*/

	/*or6

	int*s1;//heap'de tanimli 
	s1=(int*)malloc(sizeof(int)); //heap'te yer ac 
	*s1=100;
	printf("%d",*s1);
	free(s1);//iade et çöp olur.
	*/

	/*or7
	void*object;
	object=(int*)malloc(sizeof(int));
	double pi=3.14;
	object=&pi;
	printf("%lf",*((double*)object));
	object="Sakarya";

	printf("%s",((char*)object));

	*/

	/*or8*/
	double a=5.14;
	int*p =malloc(sizeof(int));
	double *r=&a;
	printf("int boyut :%d: ",sizeof(p));
	printf("\n double boyut :%d: ",sizeof(r));


	return 0 ;
}