#include<stdio.h>


int main(){
    int a = 0;
    int b = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    int wynik = a;
    for (int i = 1; i < b; i++)
    {
        wynik = wynik*a;
    }
    printf("%d \n",wynik);
    return 0;
}