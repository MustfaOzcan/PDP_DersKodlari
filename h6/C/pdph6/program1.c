#include "stdio.h"

double topla(double,double);//prototip tanimi
int main()
{
    
    double a=10,b=25;
    double c=topla(a,b);
    printf("%lf",c);
    return 0 ; 
    

 
}
//prototip tanimlama: asagidaki fonksiyonu tanimasi icin fonksiyonun prototip tanimi yukarida yapilmalidir.
 double topla(double x,double y){
    return x+y;
}
