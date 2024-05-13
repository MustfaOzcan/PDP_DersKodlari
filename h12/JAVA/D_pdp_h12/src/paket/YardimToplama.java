package paket;

public class YardimToplama implements Runnable {

	private Hesap hesap;
	private int miktar;
	
	public YardimToplama(Hesap hesap,int miktar) {
		this.hesap=hesap;
		this.miktar=miktar;
	}
	
	
	@Override
	public void run() {
		// TODO Auto-generated method stub
		hesap.paraYatir(miktar);
	}
	
	

}
