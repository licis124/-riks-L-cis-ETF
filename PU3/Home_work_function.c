
#include <stdio.h>


int a,b,d;


void my_first_function();
int my_second_function();
void my_third_function( char c);
double my_fourth_function( int a, int b);

int main(void) 
{ my_first_function(); 
  printf("Cienijamais lietotajs ievadiet 1. skaitli  \n");
  scanf("%d",&a);
  printf("Cienijamais lietotajs ievadiet 2. skaitli  \n");
  scanf("%d",&b);
  int d_main;
  double result_main;
   my_third_function('i');
 d_main = my_second_function();
  result_main = my_fourth_function(a,b);
  return 0;
}

void my_first_function()
{
  printf("Labdien cienijamais lietotaj ! \n");
}
int my_second_function()
{
  int d;

  d = a -b;
 printf("%d - %d = %d\n",a,b,d);
  return d;
}
void my_third_function(char c)
{
  printf("Tavi skaitļi ir izmantoti ar %cnt datu tipu\n",c);
}
double my_fourth_function( int a, int b)
{
  double result = (float)a / b;
  printf(" %d / %d = %f\n",a, b,result); 
  return result;
}
