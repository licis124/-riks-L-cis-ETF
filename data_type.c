
// Kods dazadu dati tipu petisana
// Informacijas vienibas, ar kuram opere cilveks - simboli un  skaitli
// simboli: burti, cipari, punktuacijas zimes utt. - ASCII tabula - simbols VS binars kods

// skaitli: vesli skaitli, realie skaitli, kompleksie skaitli (divas dalas - Re un Im)

// Informacija vieniba ar kuru opere dators - bits (0/1)
// informacija vieniba ar adresi(datora) - baits
// 1 byte == 8 bits
// ASCII tabula  - one symbol == 1 byte
// unique binary combination inside 1 byte - 256
// 1 bit : 0,1 - 2 kombinacijas
// 2 bits : 00, 01 ,10 ,11 - 4 kombinaciajs
// 3 bits : 000, 001, 010, 011, 110 , 100 , 101 ,111 - 8 kombinacijas
// x biti ..... - (stavoklu skaits)^biti - (2)^8 = 256
// ASCII - 256 unkali simboli ( ASCII tabula 1. dala - 128 simboli)

#include <stdio.h>
#define A 11

void main ()
 {
 char a = 10; // pieskirsanas operacija (=)
// Definesana
// 1. darbiba - RAM atmina tiek atveleta vieta viena char datu tipa mainiga glabasanai
// si vieta ir viennozimigi sakedeta ar indetifikatoru "a" (bet, vietai ir ari adrese)
// saskana ar char datu tipu, vietas izmers = 1 byte
// Ka saja izkstaijas tas atminas apgabals: 0000 0101 vai 1111 0111 vai 0000 1010
// char a;
// 2. darbiba - vertibas pieskirsana
// a = 10;
// a -> 0000 1010
printf("Mainiga a vertiba laika momenta t1: %d\n",a);
a = 125 ;
printf("Mainiga a vertiba laika momenta t2: %d\n",a);
printf("Konstante A  vertiba laika momenta t3: %d\n",A);
// Konstanti A nevar  mainit
 char mans_mainigais = 45; // centisimies izmantot mnemoniskos nosaukumus - nosaukums atspogulo mainiga jegu
a = 0x10; // ||||||||||
printf("Mainiga a vertiba laika momenta t4 : %d\n",a); // prognoze 16
printf("Mainiga a vertiba laika momenta t5: 0x%x\n",a); // prognoze 10
printf("Mainiga a vertiba laika momenta t6: %o(oct)\n",a); // prognoze 20

a = 65;
printf("Mainiga a vertiba laika momenta t4 : %d\n",a); 
printf("Mainiga a vertiba laika momenta t5: 0x%x\n",a); 
printf("Mainiga a veriba laika momenta t6: %o(oct)\n",a); 
printf("Mainiga a vertiba ka  simbols laika momenta t1: %c\n",a); 

a = 'k';
printf("Mainiga a vertiba laika momenta t4 : %d\n",a); 
printf("Mainiga a vertiba laika momenta t5: 0x%x\n",a); 
printf("Mainiga a veriba laika momenta t6: %o(oct)\n",a); 
printf("Mainiga a vertiba ka  simbols laika momenta t1: %c\n",a); 

a = 125;
printf("Mainiga a vertiba laika momenta t4 : %d\n",a); 
a = 126;
printf("Mainiga a vertiba laika momenta t4 : %d\n",a); 
a = 127;
// 1 byte - 256 symbols
// -> without sign 0 ..255
// -> with sign -128....0....127
// a = 258;
// 258 = 256+2 -> 0000 0001 | 0000 0010 |
printf("Mainiga a vertiba laika momenta t4 : %d\n",a); 
a = 128;
printf("Mainiga a vertiba laika momenta t4 : %d\n",a); 

unsigned char b = 128;
printf("Mainiga a vertiba laika momenta t4 : %d\n",b); 

int c;
printf("int datu tipa izmers bytes: %ld\n",sizeof(c));
// soreiz int atbilst 4 baiti (32biti)
// ==> without sign 0....(2^32-1)
// --> with sign -(2^31).....0....(2^31-1)

//-----------------------------------------
float d = 6.5;// sizeof pasi uztaisit
// double

printf("float datu tipa skaitla attattelosana : %f\n",d); 
printf("float datu tipa skaitla attattelosana : %.2f\n",d); 
printf("float datu tipa skaitla attattelosana : %.0f\n",d); 


}
