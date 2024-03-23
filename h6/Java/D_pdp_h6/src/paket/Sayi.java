package paket;
//nesneye yonelik tasarim vizede gelmez 
public class Sayi {
	
	
	private int deger;//public static int deger;
	private int uzunluk;
	
	public Sayi(int dgr) {
		
		deger=dgr;
		uzunluk=String.valueOf(dgr).length();
		
	}
	public boolean asalmi(int... bolen) {
		//parametre olarak birden fazla parametre aliyor 
		
		if(bolen.length==0) return asalmi(2);//ilk defa cagirilmistir
		if(deger==bolen[0]) return true;	//durma kurali
		if(deger%bolen[0]==0) return false;
		return asalmi(bolen[0]+1);//boleni bir arttir
		
		
	}
	
	
	public int getUzunluk() 
	{
		
		return uzunluk;
	}
	
	public short []rakamlar()
	{
		int tmp=deger;
		short[] rkm=new short[uzunluk];
		int index=uzunluk-1;//index tersten basliyor
				while(tmp>0)
				{
					rkm[index--]=(short)(tmp%10);
					tmp/=10;
							
				
				}
				return rkm; 
	}
	
	
	
	
	
	
	
	

}
