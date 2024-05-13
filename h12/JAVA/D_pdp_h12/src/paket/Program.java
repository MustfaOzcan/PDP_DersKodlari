package paket;


import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;


public class Program {

	public static void main(String[] args) {
		
	/*	
		ExecutorService havuz=Executors.newFixedThreadPool(3);//havuza 3 thread atadık 
		
		
		KarakterIslem ayaz=new KarakterIslem('a', 100);//a karakterini 100 adet yaz	
		KarakterIslem byaz=new KarakterIslem('b', 100);//b karakterini 100 adet yaz
		RakamIslem yuzYaz=new RakamIslem(100);// 1 den yuze yaz
		
		
		//threadlere iş atanıyor.
		Thread isci1 =new Thread(ayaz);
		Thread isci2 =new Thread(byaz);
		Thread isci3 =new Thread(yuzYaz);
		
	/*	//threadleri kuyruğa ekle 
		isci1.start();
		isci2.start();
		isci3.start();
		//isler bitmeden program sonlanmamali ana thread oyalansin işler bitene kadar
	*/	
	//	havuz.execute(ayaz);
	//	havuz.execute(byaz);
	//	havuz.execute(yuzYaz);
		
		
		/*while (isci1.isAlive()||isci2.isAlive()||isci3.isAlive()) {//isciler hayatta ise
						
						//ana thread oyalaniyor
						//sonsuz dongu 
			
			}*/
		
		//ana thread burada işlemleriin ibtmesini oyalanacaktır.
	//	havuz.shutdown();
	//	while(!havuz.isTerminated()) {};
		
		
		
		//////////OTHERPROJE
		ExecutorService havuz=Executors.newFixedThreadPool(10);//havuza 3 thread atadık 
		Hesap hesap=new Hesap();
		for(int i=0;i<100;i++)
		{
			havuz.execute(new YardimToplama(hesap, 1));
		}
		havuz.shutdown();
		while (!havuz.isTerminated()) {
			
			
		}
		System.out.println("topalanan yardim: "+hesap.getBakiye()+"TL");
		
		
		//par begin; fork-join kritik-bölge kod olarak sınavda sorulabilir javadan diyagram sorusu gelebilir
	}

}
