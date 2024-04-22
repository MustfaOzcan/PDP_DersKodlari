#include "Sekil.h"
//private benzetimi 
char* zamanGetir(){
    char*buff =malloc(sizeof(char)*100);
    time_t simdi=time(0);
    strftime(buff,100,"%d-%m-%Y %H:%M",localtime(&simdi));
    return buff;
} 

int doubleUzunluk(double deger){
    char alanStr[50];
    sprintf(alanStr,"%lf",deger);
    int uzunluk=strlen(alanStr);
    return uzunluk;
}
//Sekil olustur fonks.
Sekil new_Sekil(char * renk){
Sekil this;
this=(Sekil)malloc(sizeof(struct SEKIL));

this->renk=renk;
this->olusturulmaTarihi=zamanGetir();

//fonksiyon gosterici ataması 
this->setRenk=&setRenk;
this->toString=&toString;
this->delete_Sekil=&delete_Sekil;
return this;
}
//renk atama fonks.
void setRenk(const Sekil this,char* renk){
    this->renk=renk;
}
//hangi yapinin toStringi Sekil'in
char* toString(const Sekil this,void*p){

    int toplamUzunluk=36;
    toplamUzunluk+=strlen(this->olusturulmaTarihi);
    toplamUzunluk+=strlen(this->renk);
    toplamUzunluk+=doubleUzunluk(this->alan(p));
    toplamUzunluk+=doubleUzunluk(this->cevre(p));
    char *str=(char*)malloc(sizeof(char)*toplamUzunluk+1);

    sprintf(str,"\n\nTarih:%s\nRenk:%s\nAlan:%lf\nCevre:%lf",this->olusturulmaTarihi,this->renk,this->alan(p),this->cevre(p));

    return str;
}
void delete_Sekil(const Sekil this){
    if(this==NULL)return;
    if(this->olusturulmaTarihi!=NULL)free(this->olusturulmaTarihi);
    free(this);
}