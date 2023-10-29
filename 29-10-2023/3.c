#include<stdio.h>


int main(){
    int Pierwsza_liczba;
    int Druga_liczba;
    printf("Podaj pierwszą liczbe:");
    scanf("%d",&Pierwsza_liczba);
    printf("\nPodaj drugą liczbe:");
    scanf("%d",&Druga_liczba);

    if (Pierwsza_liczba == Druga_liczba){

        printf("\nLiczby są równe\n");

        }else if (Pierwsza_liczba < Druga_liczba)
    {
       printf("%d jest większe\n", Druga_liczba); 
    }else  
       printf("%d jest większe\n", Pierwsza_liczba); 
    
    
    return 0;
}