package pkt;

public class Program {
	
	
	public static void main(String[] args ) 
	{
		/*or1  int[]a=new int [5]; 
		System.out.println(a[2]);
		
		
		
		
		int[]a=new int [5]; 
		System.out.println(a);
		*/
		
		
		
		/*or2 		
		
		String string="SAU";
		String tmp=string.repeat(5);
		System.out.println(tmp);
		*/
		
		
		
		/*or3
		Sayi s1=new Sayi(100);//referans 
		Sayi s2=new Sayi(50);
		Sayi yedek;
		
		System.out.println("a:"+s1.deger);
		System.out.println("b:"+s2.deger);
		
		//swap islemleri
		//
		yedek=s1;
		s1=s2;
		s2=yedek;
		/////
		System.out.println("a:"+s1.deger);
		System.out.println("b:"+s2.deger);
		*/
			
		
		/*or4
		
		Sayi s1=new Sayi(100);
		Sayi s2=new Sayi(50);
		System.out.println(s1);//bellek adresini yaziyor 
		*/
		
		
		/*or5*/
		Object a=100;
		a=new Sayi(500);
		System.out.println(((Sayi)a).deger);
		
		a="Merhaba";
		
		//System.out.println(((String)a).deger);
		
		
		
	}	

}
