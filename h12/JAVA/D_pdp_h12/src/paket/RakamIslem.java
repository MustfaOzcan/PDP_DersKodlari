package paket;

public class RakamIslem implements Runnable {
	
	private int sonSayi;
	public RakamIslem(int sonSayi) {
		this.sonSayi=sonSayi;
	}
	@Override
	public void run() {
		for(int i=1;i<sonSayi;i++) {
			
			System.out.print(i);
		/*	try {
				if(i == 50) Thread.sleep(1000);
				
			} catch (Exception e) {
				// TODO: handle exception
				
			}
				*/
				
			
			
		}
		
	}
	

}
