#include <stdio.h>

int main(void) {
  char a;
  printf("Ievadi burtu ar kuru datu tipu tu gribi strādāt : int(i), char(c), long(l) : ");
  scanf("%s",&a);
  if(a == 'i'){
       int c, n, f = 1;
  printf("Ievadi skaitli no kuras gribi dabūt faktoriālu : \n");
  scanf("%d", &n);
  for (c = 1; c <= n; c++)
    f = f * c;
 if(f == 0){
  printf("kļūda\n");
  }else{
    printf("Faktorials no %d = %d\n", n, f);
  }
  }

  if(a == 'c'){
      char c, n, f = 1;
  printf("Ievadi skaitli no kuras gribi dabūt faktoriālu : \n");
  scanf("%d", &n);
  for (c = 1; c <= n; c++)
    f = f * c;
 if(f == 0){
  printf("kļūda\n");
  }else{
    printf("Faktorials no %d = %d\n", n, f);
  }
  }
 

  if(a == 'l'){
     long c, n, f = 1;
  printf("Ievadi skaitli no kuras gribi dabūt faktoriālu : \n");
  scanf("%ld", &n);
  for (c = 1; c <= n; c++)
    f = f * c;
 if(f == 0){
  printf("kļūda\n");
  }else{
    printf("Faktorials no %ld = %ld\n", n, f);
  }
  }
  return 0;
}
