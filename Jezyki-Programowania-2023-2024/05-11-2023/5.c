#include<stdio.h>


int main(){
    int n=0;
    scanf("%d",&n);
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        a[i]=i;
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d , ",a[i]);
    }
    
    
    return 0;
}