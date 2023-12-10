#include<stdio.h>


int main(){
    int Pierwsza_liczba;
    int Druga_liczba;
    int Trzecia_liczba;
    printf("Podaj pierwszą liczbe:");
    scanf("%d",&Pierwsza_liczba);
    printf("\nPodaj drugą liczbe:");
    scanf("%d",&Druga_liczba);
    printf("\nPodaj trzecią liczbe:");
    scanf("%d",&Trzecia_liczba);

    if (Pierwsza_liczba == Druga_liczba && Trzecia_liczba == Pierwsza_liczba){

        printf("\nLiczby są równe\n");

        }else if (Pierwsza_liczba < Druga_liczba)
    { if (Druga_liczba < Trzecia_liczba)
    {
        printf("%d jest większe\n", Trzecia_liczba); 
    }else
    
       printf("%d jest większe\n", Druga_liczba); 
    }else if (Pierwsza_liczba > Trzecia_liczba)
    {
        
       printf("%d jest większe\n", Pierwsza_liczba); 
    }else  
        printf("%d jest większe\n", Trzecia_liczba);
    
    return 0;
}