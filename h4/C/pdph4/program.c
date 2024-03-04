#include "stdio.h"
//or2 fonksiyonu
const char* f(int ulke) {
    switch(ulke) {
        case 0:
            return "Yurtici";
        case 1:
            return "Yari Yurtdisi";
        default:
            return "Yurdisi";
    }
}

int main()
{
    /*or2
        const char *sonuc=f(1);
        printf("sonuc: %s",sonuc);
    */

   /* //or1  
    int x;
    printf("x: ");
    scanf("%d",&x);
    if(x%2==0)
        if(x>0)
            if(x<100)
                 printf("sayi sifirdan buyuk ve 100den kucuk cift.");
    
    else printf("sayi 100 den buyuk cift.");//bu else  hangi if'in else'i ?
                                            //en son if'in else'i        
        
        */

    

    //çoklu kontrol , üçlü operator ornegi
	int sayi;
	printf("bir sayi girin :");
	scanf("%d",&sayi);
	
	char* sonuc;
	sonuc=(sayi%2==0 ? "sayi cifttir" : "sayi tektir."); //: nın sol ve sag degerleri aynı türden olmalı. string ise string double ise double.
	printf("%s",sonuc);
	
	
	
	//c# da geçerli!!!! "?? " gösterimli bir operator bulunur. bu: null değilse kullan null ise nesne üret şeklinde düşünebilirsin.
	/* class Sayi{
		private Sayi veri;
		public Dugum(Sayi veri=null){  //varsayilan parametre null
		    this.veri=veri ?? new Sayi(); //eğer veri null değilse bana gönderilmiş veriyi sınıfın elemanı olan veriye ata.yoksa yeni bir sayi nesnesi oluştur.üçlü operator kullanımına benziyor.
		}
	}
	*/


    return 0; 
}
