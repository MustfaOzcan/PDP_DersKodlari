package paket;

import java.util.Scanner;

public class Program {

	public static void main(String[] args) {
			
	
			/*or1 */
		
		/* int s[]={10,2,63,14,48,39,74,12};
		 Scanner in=new Scanner(System.in);
		    int sayi;

		    System.out.println("Aranan sayi : ");

		    sayi=in.nextInt();
		    
		    // elemanı (e) s içinde dolaştır 
		    for(int e: s) {
		    	if(e==sayi) { 
		    	System.out.println("sayi var");
		    	break;
		    	
		    	}
		    	
		    }
		    
		    */
		    
		/* 
		    int s[]={10,2,63,14,48,39,74,12};
			 Scanner in=new Scanner(System.in);
			    int sayi;
		    for(int e: s) {     
		    	e++;
		    }
		    System.out.println(s[3]);
		*/
		    
		/*    
		// or2
		//kullanici asal olmayan sayi girsin  //regex ile
		 int sayi;
		 Scanner in=new Scanner(System.in);
		    
		do {
			System.out.println("asal olmayan sayi :");
			sayi=in.nextInt();
			
		}while(!new String(new char[sayi]).matches(".?|(..+?)\\1+"));
		System.out.println("girilen sayi asal degildir.");
		*/
		
		
		//or3 
		System.out.print("       Carpim Tablosu\n");
		System.out.print("--------------------------------\n");
		System.out.print("# | ");//aynı satir
	    for(int i=1;i<=9;i++){
	    	System.out.print("  "+i); //ayni satir
	    }
	    System.out.print("\n--------------------------------\n");
	   
	    for(int i=1;i<=9;i++){
	    	System.out.print(i+" | ");
	        for(int j=1;j<=9;j++){
	              if(i*j<10) System.out.print("  "+i*j);//i*j degeri 10 küçükse çok boşluk birak
	              else {
	            	  System.out.print(" "+(i*j));
	              }
	              
	        }
	        System.out.print("\n");
	    }
	    System.out.print("\n");
		
	
	/*
		 System.out.println("             CASRPIM TABLOSU");
		 System.out.println("------------------------------------------------------");
		 System.out.print("# |");
		 for(int i=1;i<=9;i++) {
			 System.out.print(" "+i);
		 }
		 System.out.println("\n------------------------------------------------------");
		 disdongu://etiket
		 for(int i =1;i<=9;i++)//satirda gidiyor
		 {		
			 System.out.print(i+" |");
			 for(int j=1;j<=9;j++)//sütünda gidiyor
			 {
				 if(i*j<10) System.out.print("  "+(i*j));
				 else {
					 break disdongu;//dısdongu etiketine gider (c dilinde goto)
				 }
			 }
			 System.out.println();
		}	
			 
	*/
		
		
		

}
	
}
