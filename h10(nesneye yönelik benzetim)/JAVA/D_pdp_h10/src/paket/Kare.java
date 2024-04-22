package paket;

public class Kare extends Sekil {
	private double kenar;
	
	public Kare(String renk,double kenar) {
		
		super(renk);
		this.kenar=kenar;
		// TODO Auto-generated constructor stub
	}

	

	@Override
	public double alan() {
		// TODO Auto-generated method stub
		return Math.pow(kenar, 2);
	}

	@Override
	public double cevre() {
		// TODO Auto-generated method stub
		return 4*kenar;
	}
	

	

}
