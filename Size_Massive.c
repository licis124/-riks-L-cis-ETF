#include <stdio.h>
#define N 4
int main(void) {
  char rinda1[N] = "abc"; // [4] = "abcd" -> 0. - a, 1. - b, 2. - c, 3. - d | 4. - \0
  char rinda2[] = {'e','f','g'};
  char rinda3[]= "ghijk";
  char *rinda4 = "lmnop";

printf("pirmās simbolu rindas izmērs baitos - %lu un simbpolos (elementos) - %lu\n",sizeof(rinda1),sizeof(rinda1)/sizeof(char));

printf("otrās simbolu rindas izmērs baitos - %lu un simbpolos (elementos) - %lu\n",sizeof(rinda2),sizeof(rinda2)/sizeof(char));

printf("trešās simbolu rindas izmērs baitos - %lu un simbpolos (elementos) - %lu\n",sizeof(rinda3),sizeof(rinda3)/sizeof(char));

printf("ceturtās simbolu rindas izmērs baitos - %lu\n",sizeof(rinda4));

for(int i=0;i<N;i++)
{
    printf("rinda1: %d. simbola dec kodas - %d\n",i,rinda1[i]);
}

printf("\n");

for(int i=0;i<3;i++)
{
    printf("rinda2: %d. simbola dec kodas - %d\n",i,rinda2[i]);
}

printf("\n");

for(int i=0;i<6;i++)
{
    printf("rinda3: %d. simbola dec kodas - %d\n",i,rinda3[i]);
}

printf("\n");

for(int i=0;i<8;i++)
{
    printf("rinda4: %d. simbola dec kodas - %d\n",i,rinda4[i]);
}


printf("\n");
for(int i=0;i<8;i++)
{
    printf("rinda4: %d. simbola adrese - %p\n",i,rinda4+i);
} 

 
 char *darba = rinda4;
 int garums = 0 , i = 0;
 while(*darba != '\0'){
   printf("rinda4: %d. simbola adrese - %d\n",i,*darba);
   darba = darba + i;
   i++; garums++ ;
 }
 garums = garums + 1;
 printf("ceturtas simbolu rindas izmers vaitos - %lu un simbolos ()elementos - %d\n",garums*sizeof(char),garums);
 return 0;

}
