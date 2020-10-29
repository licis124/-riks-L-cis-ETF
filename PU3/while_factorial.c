#include <stdio.h>

int main(void) {
  char a;
  printf("Ievadi burtu ar kuru datu tipu tu gribi strādāt : int(i), char(c), long(l) : ");
  scanf("%c",&a);
  if(a == 'i'){
      int n,i,f;
    f=i=1;
    printf("Ievadiet skaitli no kura gribat dabūt faktoriālu ar datu tipu int: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    if(f == 0){
    printf("Kļūda");
    }else{
      printf("Faktorials no %d ir : %d",n,f);
    }
  }

  if(a == 'c'){
     char n,i,f;
    f=i=1;
    printf("Ievadiet skaitli no kura gribat dabūt faktoriālu ar datu tipu char: ");
    scanf("%c",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }if(f == 0){
    printf("Kļūda");
    }else{
      printf("Faktorials no %d ir : %d",n,f);
    }
  
  }
 

  if(a == 'l'){
     long n,i,f;
    f=i=1;
    printf("Ievadiet skaitli no kura gribat dabūt faktoriālu ar datu tipu long : ");
    scanf("%ld",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    if(f == 0){
    printf("Kļūda");
    }else{
      printf("Faktorials no %ld ir : %ld",n,f);
    }
    
  }
  return 0;
}
