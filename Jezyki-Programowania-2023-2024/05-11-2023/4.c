#include<stdio.h>


int main(){
    int n=5;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=i;
        b[i]=a[i]*a[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d , ",b[i]);
    }
    
    
    return 0;
}