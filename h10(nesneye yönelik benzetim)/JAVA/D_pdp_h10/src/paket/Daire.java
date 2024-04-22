package paket;

public class Daire extends Sekil {
	
	private double yaricap;
	
	public Daire(String renk,double yaricap) {
		super(renk);
		this.yaricap=yaricap;
		
	}

	@Override
	public double alan() {
		// TODO Auto-generated method stub
		return Math.PI*Math.pow(yaricap, 2);
	}

	@Override
	public double cevre() {
		// TODO Auto-generated method stub
		return 2*Math.PI*yaricap;
	}

	
}
