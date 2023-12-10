#include<stdio.h>


int main(){
    int a = 0;
    int b = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    int temp = a;
    int c = 0;
    for (int i = 1; i < b; i++)
    {
        temp = temp * a;
        if (temp > b)
        {
            c = i;
            break;
        }
        
    }
    printf("%d \n",c);
    return 0;
}