#include<stdio.h>

int main(){
    int n = 4;
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += i*i;
        
    }
    printf("%d" ,suma);
    return 0;
}