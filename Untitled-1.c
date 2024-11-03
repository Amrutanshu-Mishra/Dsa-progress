#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    char x;
    printf("Enter the choice: ");
    scanf("%c",&x);
    if(x=='p'){
        printf("%d",n+n);
    }
    else if(x=='f'){
        printf("%d",2*n);
    }
}