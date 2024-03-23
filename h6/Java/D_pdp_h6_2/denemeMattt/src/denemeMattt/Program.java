package denemeMattt;

import java.util.Scanner;
import matt.Pi; //matt paketindeki Pi class'i
public class Program {

	public static void main(String[] args) {
		//bu kısımda kütüphaneyi kullaniyoruz 
		
		
		Scanner in = new Scanner(System.in);
		int denemeSayisi;
		System.out.print("deneme sayisi: ");
		denemeSayisi=in.nextInt();
		
		Pi pi =new Pi(denemeSayisi);
		System.out.println("pi:"+pi.deger());
		
		
		//sinav klasik olacak 5-6 soru kod yazma sorusu ,normal teorik soru yorumlama çözme soru, örnek statick dianmik kapsam bağlama göre çıktıyı bul m derleyicilerin aşamları gramer bilgisiyle token bilgisi programlama dilleri karşılaştırma soruları kod olarka son saatteki java C veya birlikte aşşağıdaki java kodhunu C de yaz ;Java C dışında kod yazma sorusu gelmmez 60 teorik 40 puan kod;Parametre aktarma yöntemleri öbemli Bellek bölgeleri önemli; 
		//RTS 

	}

}
