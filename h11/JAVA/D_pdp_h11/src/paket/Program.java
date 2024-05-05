package paket;

import java.util.Scanner;

public class Program {

	public static void main(String[] args) {
		
		Hesap hesap=new Hesap();
		Scanner in =new Scanner(System.in);
		double miktar;
		Boolean kontrol=false;
		do{
			System.out.println("yatirilacak miktar:");
			miktar=in.nextDouble();
			try {
				hesap.paraYatir(miktar);
				kontrol=true;
			} catch (ArithmeticException | IllegalArgumentException  e) {
				// TODO: handle exception
				System.out.println(e.getMessage());
				
			}
					
			
			
		}while(kontrol==false); 
		
		

		
			hesap.paraCek(150);
			System.out.println(hesap);
			
			
			
		} 
	}


