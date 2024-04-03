package paket;

public class Kisi {
	
	
	private String isim;
	private double boy;
	private double kilo;
	private int yas;
	protected int no;
	
	public Kisi(String isim,double boy,double kilo,int yas) {
		
		this.isim=isim;
		this.boy=boy;
		this.kilo=kilo;
		this.yas=yas;
			
	}
	
	public void yemekYe(double kalori) {
		
		kilo +=(kalori/1000);
		if(yas<18) boy+=0.5;				
	}
	public void yaslan() {
		yas++;
		}
	
	
	public double getKilo() {
		return kilo;
	
	}
	
	@Override
	protected void finalize() throws Throwable {
		try {
			System.out.println("cagrildi.");
		}
		finally {
			super.finalize();
		}
	}
	

}
