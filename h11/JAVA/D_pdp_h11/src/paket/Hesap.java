package paket;

public class Hesap {
	
	private double bakiye;
	
	
	public Hesap() 
	{
		bakiye=0;
	}
	public void paraYatir(double miktar) {//hatali durum varsa işlryişi sonlandir
		if(miktar<=0) 
		{
			throw new ArithmeticException();//işleyiş kesildi
		}
		bakiye+=miktar;
		
		
		
	}
	
	public void paraCek(double miktar) {
		
		if(miktar<=0||miktar>bakiye) {
			throw new IllegalArgumentException("bakiye yetersiz");//işleyiş kesildi
		}
		bakiye-=miktar;
		
	}
	
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return"bakiye"+ bakiye;
	}
	
	
	
	
	

}
