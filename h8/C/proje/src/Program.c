#include "Kisi.h"

int main(){

Kisi k=newKisi("mehmet",180,78,16);
printf("yemekten once: ");
getKilo(k);

yemekYe(k,1500);//yemeği k yiyecek ve 1500 kalori yiyecek
yaslan(k);//k kisisi yaşlanacak 
printf("yemekten  sonra:");
getKilo(k);//k nı n kilosunu getir

deleteKisi(k);//k' yi yok et


return 0;
}
