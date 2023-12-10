#include<stdio.h>

int  n = 2;

int main(){
    
    int  p = n;
    scanf("%d",&n); 
    scanf("%d",&p); 
    printf("%p \n %p\n",&n,&p);
    return 0;
}