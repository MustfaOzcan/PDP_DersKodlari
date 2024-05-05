#include "Hesap.h"

int main(){

    system("cls");//ekrani temizle
    
    Hesap hesap=new_Hesap();

    try{
            hesap->paraYatir(hesap,-5);
    }
    catch{
        printf("Miktar hatali.");
    }
    tryEnd;

    try
    {
        hesap->paraCek(hesap,1250);
    }
    catch{
        printf("bakiye yetersiz.");
    }
    tryEnd;

    printf("bakiye: %lf",hesap->getBakiye(hesap));
    hesap->delete_Hesap(hesap);//sil 
        return 0 ;
}