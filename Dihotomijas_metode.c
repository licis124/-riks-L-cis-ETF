#include <stdio.h>
#include <math.h>
int main()
{
    float a = 1.2, b = 3.2*M_PI, x, delta_x = 1.e-3, funca, funcb;
    int k = 0;
    
    funca = j0(a); funcb = j0(b);
    if(funca*funcb>0){
        printf("Intervala [%.2f ; %.2f] j0(x) funkcijai",a,b);
        printf("Saknju nav (vai taja ir paru saknju skaits)\n");
        return 1;
    }
    printf("j0(%7.3f)=%7.3f\t\t\t\t",a,j0(a));
    printf("j0(%7.3f)=%7.3f\n",b,j0(b));
    
    while((b-a)>delta_x){
        k++;
        x = (a+b)/2.;
        if(funca*j0(x)>0)
        a = x;
        else
        b = x;
        printf("%2d. iteracija: j0(%7.3f)= %7.3f\t",k,a,j0(a));
        printf("j0(%7.3f)=%7.3f\t",x,j0(x));
         printf("j0(%7.3f)=%7.3f\n",b,j0(b));
    }
printf("Sakne atrodas pie x=%.3f, jo j0(x) ir %.3f\n",x,j0(x));
    return 0;
}
