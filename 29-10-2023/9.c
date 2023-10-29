#include<stdio.h>
#include<stdlib.h>

int main(){
    int Ax = 0;
    int Ay = 0;
    int Bx = 0;
    int By = 0;

    printf("Podaj współrzędne Punktu A:");
    scanf("%d %d",&Ax,&Ay);
    printf("\nPodaj współrzędne Punktu B:");
    scanf("%d %d",&Bx,&By);
    int szerokosc = abs(Ax - Bx);
    int wysokosc = abs(Ay - By);
    int pole = wysokosc * szerokosc;
    int obw = (2 * wysokosc) + (2 * szerokosc);
    printf("\nSzerokosc:%d\n",szerokosc);
    printf("Wysokosc:%d\n",wysokosc);
    printf("Pole:%d\n",pole);
    printf("Obwod:%d\n",obw);
 

    return 0;
}