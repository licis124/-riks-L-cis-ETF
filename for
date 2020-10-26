//cikls for(sākuma vērtības ; izteiksmi; cikla mainīga izmaiņas){darbibu bloks}
//for(sākuma vērtības ; izteiksmi; cikla mainīga izmaiņas)_viena darbiba;
//      izteiksmes rezultātas - vai 0 vai nav 0


#include <stdio.h>
#include <math.h>

int main(void) {

for (;0;){
 printf("Šīs tesksts netiks attēlots\n");
}
for (;1;){
 printf("Šīs tesksts tiks attēlots bezgalīgo laiku\n");
 break;
}


double a = 3.5e-1; // matematiskā vertība būs 0.35, 3.5 * 10^(-1) = 3.5 * 0.1 = 0.35, 0.35e0, 35e-2d
  double s= 0.5e-1;

  double precision = s/2; // precizitāte 0.025

  for( a=0.35, s=0.05, precision = s/2 ;  fabs(a - 1.0) > precision ;a+=s, s+=0.001 )// a!=1.0 - neapstāsies
  {
    printf("a = %.2f (vai ar peldošo punktu %e; solis - %.3f)\n",a,a,s);
    printf("a-1,0 = %.20f (vai ar peldošo punktu %g)\n",a-1.0,a-1.0);
    
  }
printf("Pēc cikla: \n");
 printf("a = %.2f (peldoso punktu %g)\n",a,a);
