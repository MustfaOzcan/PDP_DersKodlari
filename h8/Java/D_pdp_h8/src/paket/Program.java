package paket;

public class Program {

	public static void main(String[] args) {
		
		
		
			Kisi k =new Kisi("Mehmet", 180, 78, 16); 
			k.yemekYe(1500);
			k.yaslan();
			k.no=5;
		
			//kisi yemek yedi,yaslandi sonra nesne yok edildi finalize ile yok edilen nesnenin kilosunu getirmeye calisiyoruz. ve kilo yu getirebiliyoruz javada nesneyi sen yok edemezsin çöp toplayıcı yok eder .
			try {
				k.finalize();
				
			} catch (Throwable e) {
				
			}
			
			System.out.println("kilo:"+k.getKilo());
		
			
			
			
	}

}
