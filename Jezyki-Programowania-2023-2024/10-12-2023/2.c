#include<stdio.h>


int main(){
    int tab[10];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d\n",&tab[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%p", &tab[i]);
    }
    

    return 0;
}