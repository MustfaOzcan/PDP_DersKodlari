package paket;

import java.util.Date;

public abstract class Sekil {
	
	private String renk;
	private Date olusturulmaTarihi;
	
 public Sekil(String renk) {
	 this.renk=renk;
	 this.olusturulmaTarihi=new Date();
	 
 }
 
 
 //rengin degistirilmesi fonks.
 public void setRenk(String renk) {
	 this.renk=renk;
 }
 
 public abstract double alan();//bu fonksiyonun tanımini kalıtım alan siniflar verecek
 public abstract double cevre(); //bunun tanımini kalıtım alan siniflar verecek
  
 @Override 
public String toString() {
	String str="tarih: "+olusturulmaTarihi+"\nrenk: "+renk+"\nalan:"+alan()+"\ncevre:"+cevre();
	return str;
}
 
 
 
 
}
