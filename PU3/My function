//data_type_ofreturned_value user_function (place for arguments) {place for actions; return returned_value; }
//                                       function can be with or without arguments(x)
//   data_type_ofreturned_value  - void                                          function can be without return
//  1. function without arguments, without returned value
//  2. function without arguments, with returned value
//  3. function with arguments, without returned value
//  4. function with arguments, with returned value
//
// function can be defined before main
// function can be declared before main and after main be defined 
#include <stdio.h>

int a_2=0;


void my_first_function();
int my_second_function();
void my_third_function( int in_a_3);
double my_fourth_function( int in_a_4a, int in_a_4b);

int main(void) 
{
  int a_main;
  int argument_for_4a = 4, argument_for_4b = 5;
  double result_main;
  printf("Hello World! from main function\n");
  my_first_function();
   printf("output of second function result %d from main function\n",my_second_function()); 
 a_main = my_second_function();
  printf("a_main = %d from main function\n",a_main); 
  my_third_function(200);
  result_main = my_fourth_function(argument_for_4a, argument_for_4b);
  printf("%d / %d = %.3f from main function\n",argument_for_4a, argument_for_4b,result_main);
  return 0;
}

void my_first_function()
{
  printf("Hello World ! from my fisrt user function \n");
}
int my_second_function()
{
  int a_2 = 100;
  printf("Hello World ! from my second user function \n");
  printf("a_2 = %d from second function\n",a_2); 
  return a_2;
}
void my_third_function(int in_a_3)
{
  printf("Hello World ! from my third user function \n");
  printf("in_a_3 = %d from third function\n",in_a_3); 
}
double my_fourth_function( int in_a_4a, int in_a_4b)
{
  double result = (float)in_a_4a / in_a_4b;
  printf("Hello World ! from my third user function \n");
  printf(" %d / %d = %.3f from fourth function\n",in_a_4a, in_a_4b,result); 
  return result;
}
