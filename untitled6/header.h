

#ifndef UNTITLED6_HEADER_H
#define UNTITLED6_HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define od(a,b) printf("%.2lf \n",(a)-(b));
#define do(a,b) printf("%.2lf \n",(a)+(b));
#define mn(a,b) printf("%.2lf \n",(a)*(b));
#define dziel(a,b) if(b!=0) printf("%.2lf \n",(a)/(b));\
else printf("nie dzieli sie przez 0 \n");
void rozm(int *r);
void menu();
int ** dyntab(int n );
void wypelnij(int ** tab, int n );
void mmac(int **mac1, int **mac2, int **wynik, int n);
void usuntab(int *** atab, int n );
double pot(double x,int n);
void mnozenie_mac();
void clear(char tab[]);
#endif //UNTITLED6_HEADER_H
