package paket;

public class KarakterIslem implements Runnable{

	private char karakter;
	private int adet;
	public KarakterIslem(char karakter,int adet)
	{
		this.karakter=karakter;
		this.adet=adet;
	}
	@Override
	public void run() {
		for (int i=0;i<adet;i++)
		{
			System.out.print(karakter);
		}
	}
	
	
	
	
}
