//cikls while(izteiksmi){darbibu bloks}
//while(izteiksmes)_viena darbiba;
//      izteiksmes rezultātas - vai 0 vai nav 0


#include <stdio.h>


int main(void) {

  while(0){
    printf("Šīs tesksts netiks attēlots\n");
  }

  while(1)//lai apturētu darbību(terminālu) ir jaspiež Ctrl + C
  {
    printf("Šīs tesksts tiks attēlots visu laiku - novērosim bezgalīgu ciklu\n");
    break;
  }

  double a = 3.5e-1; // matematiskā vertība būs 0.35, 3.5 * 10^(-1) = 3.5 * 0.1 = 0.35, 0.35e0, 35e-2d
  double s= 0.5e-1;
  
  double precision = s/2; // precizitāte 0.025

  while(  fabs(a - 1.0) > precision  )// a!=1.0 - neapstāsies
  {
    printf("a = %.20f (vai ar peldošo punktu %g)\n",a,a);
    printf("a-1,0 = %.20f (vai ar peldošo punktu %g)\n",a-1.0,a-1.0);
     //a = a + s; 
      //divas operācijas - + un =, operācijām(darbibām) katrai ir sava prioritāte
      // + operacija ir prioritara salidzinajuma ar = operacija => ta tiks izpildita pirma
      // laika momenta t1 no atminas uz procesoru aibrauks a mainiga (0.35), s mainiga vertiba (0.05)
      // šis vērtības tiks saskaitītas. 0.40 (ar double datu tipu)
     //laika momentā t2 iepriekšejas operacijas rezultatu vertiba tiks piešķirta a mianigajam 
    a += s; // kompakts pieraksts tam pašam darbībām a = a + s;
     
  }
  printf("Pēc cikla: \n");
 printf("a = %.20f (peldoso punktu %g)\n",a,a);
 printf("a-1,0 = %.20f (vai ar peldošo punktu %g)\n",a-1.0,a-1.0);



  return 0;
}
