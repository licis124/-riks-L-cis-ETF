#include <stdio.h>

int main() {
  int a,b,c;
  int d;
    printf("Ievadiet 1. skaitli līdz 9 : ");
    scanf("%d",&a);
    printf("Ievadiet 2. skaitli līdz 9 : ");
    scanf("%d",&b);
    printf("Ievadiet 3. skaitli līdz 9 : ");
    scanf("%d",&c);
    printf("Kādā secībā jūs gribētu sakārtot skaitļus ? Augošā(1) vai Dilstošā(2) ? : ");
    scanf("%d",&d);
    if(a <=9 && b <=9 && c<=9 ){
    if(d == 2){ 
      if(a>b && b>c ){
       printf("%d , %d, %d, skaitļi ir sakārtoti dilstošā secībā\n",a,b,c);
      }else if(a<b && b<c){
          printf("%d , %d, %d, skaitļi ir sakārtoti dilstošā secībā\n",c,b,a);
        }else if(b>a && a>c){
        printf("%d , %d, %d, skaitļi ir sakārtoti dilstoša secībā\n",b,a,c);
      }else if (b<a && a<c){
        printf("%d , %d, %d, skaitļi ir sakārtoti dilstoša secībā\n",c,a,b);
      }else if (a<c && c<b){
        printf("%d , %d, %d, skaitļi ir sakārtoti dilstoša secībā\n",b,c,a);
      }else if (b<c && c<a){
        printf("%d , %d, %d, skaitļi ir sakārtoti dilstoša secībā\n",a,c,b);
      }
    }
      
    if(d == 1){
      if(a>b && b>c ){
       printf("%d , %d, %d, skaitļi ir sakārtoti augošā secībā\n",c,b,a);
      }else if(a<b && b<c){
          printf("%d , %d, %d, skaitļi ir sakārtoti augošā secībā\n",a,b,c);
        }else if(b>a && a>c){
        printf("%d , %d, %d, skaitļi ir sakārtoti augošā secībā\n",c,a,b);
      }else if (b<a && a<c){
        printf("%d , %d, %d, skaitļi ir sakārtoti augošā secībā\n",b,a,c);
      }else if (a<c && c<b){
        printf("%d , %d, %d, skaitļi ir sakārtoti augošā secībā\n",a,c,b);
      }else if (b<c && c<a){
        printf("%d , %d, %d, skaitļi ir sakārtoti augošā secībā\n",b,c,a);
      }
    }
    }else{
      printf("Kļūda,skaitļa vertība ir lielāka nekā 9 ");
    }
return 0;
}
