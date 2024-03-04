package paket;

import java.util.Scanner;

public class Program {

	public static void main(String[] args) {
		
		/*  //or1 
		
		Scanner in=new Scanner(System.in);
		double not;
		System.out.println("Ders Puani :");
		not=in.nextDouble();
		if(not<40) System.out.println("FF");
		else if(not<60) System.out.println("DD");
		else if(not<70) System.out.println("CC");
		else if(not<80) System.out.println("BB");
		else System.out.println("AA");
	
		*/
		
		/*//or2  
		Scanner in=new Scanner(System.in);
		String ulke;
		System.out.println("Ulke:");
		//if(ulke=="Turkiye")//yanlıs kullanim
		//if(ulke.equals("Turkiye"));//dogru kullanim	
		ulke=in.next();
		switch(ulke) {
		
		case "Turkiye":
			System.out.println("Yurtici");
			break;
			
		case "Kıbris":
			System.out.println("Yari Yurtdisi");
			break;
			
			default:
				System.out.println("Yurtdisi");
				break;
		}
		*/
		
		
		
		
		/*//or3
		
		Scanner in=new Scanner(System.in);
		int sayi;
		String sonuc;
		System.out.println("Sayi:");
		sayi=in.nextInt();
		
		if(sayi%2==0) sonuc="Cift";
		else sonuc="Tek";
		System.out.println(sonuc);
		
		*/
		
		/*//or4
		Scanner in=new Scanner(System.in);
		int sayi;
		String sonuc;
		System.out.println("Sayi:");
		sayi=in.nextInt();
		sonuc=(sayi%2==0) ? "Cift":"Tek";//sayi mod 2 eşit eşit sifir ise Cift yaz degil ise Tek yaz
		System.out.println(sonuc); 	
		*/
		
	}

	
	
}
