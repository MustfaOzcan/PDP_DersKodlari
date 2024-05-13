package paket;

import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class Hesap {
	
	private int bakiye;
	private final Lock bolge;
	public Hesap() {
		
		bakiye=0;
		bolge=new ReentrantLock();
	}
	
	public int getBakiye() {
		return bakiye;
	}
	
	public void paraYatir(int miktar) {//kritik bölge 
		bolge.lock();
		int yeniToplam=bakiye+miktar;
		try {
			
			Thread.sleep(1);
		}
		catch (Exception e) {
			
		}
		bakiye=yeniToplam;
		bolge.unlock();
	}

}
