#include <stdio.h>
void test(int *paa)
{
  printf("mainiga vertiba no test - %d\n",*paa);
  printf("mainiga adrese no test - %p\n\n",paa);
  *paa = *paa +10;
}



int main(void) 
{
  int a =5;
  int *pa=&a;
  int **ppa=&pa;

  printf("mainiga vertiba pirms test no main - %d\n",a);
  printf("mainiga adrese  pirms test no main - %p\n\n",pa);
  test(pa);

  printf("mainiga vertiba pec test no main - %d\n",a);
  printf("mainiga adrese  pec test no main - %p\n",pa);
  return 0;
}
