package matt;


import java.util.Random;
//Bu class'i kütüphane olarak baska bir projeye eklememiz  gerekiyor 
//bu projeyi File>Export>Jar File>kaynağı seçip .jar uazantılı dosya elde etmemiz gerekiyor. 

public class Pi {

	private final double denemeSayisi;
	
	public Pi(double ds) 
	{
		denemeSayisi=ds;
	}
	public double deger() 
	{
		int basariliAtis=0;
		Random rndRandom=new Random();
		for(double atis=0;atis<denemeSayisi;atis++)
		{
			double x=rndRandom.nextDouble();
			double y = rndRandom.nextDouble();
			double uzunluk=Math.sqrt(Math.pow(x,2)+Math.pow(y,2));
			if(uzunluk<=1) basariliAtis++;
			
		}
		return 4*(basariliAtis/denemeSayisi);
		
		
	}
	
	
}
