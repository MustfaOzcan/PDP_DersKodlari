#include "stdio.h"
#include "setjmp.h"

jmp_buf jumper;
//try catch benzetimi icin tanimlamalar
#define try do{ if (!setjmp(jumper)) {
#define catch }else{
#define tryEnd } }while(0)
#define throw longjmp(jumper,1)



int Bolme(int x,int y){
    if(y==0) throw;
    return x/y;
}

int main()
{

    int a,b;
    printf("A: ");
    scanf("%d",&a);

    printf("B: ");
    scanf("%d",&b);
    try{    //try block  
        int c=Bolme(a,b);
        printf("C: %d",c);

    }catch{
        printf("sifira bolunma hatasi"); //catch kismi 
    }
    tryEnd;
    //int c=Bolme(a,b);//A= 10 B= 0 için bölme hatasi ekran bos geliyor. 
   // printf("%d",c);



} 