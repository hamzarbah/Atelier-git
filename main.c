#include<stdio.h>
int main() {
    int a;
    int b;
    printf("\nSaisie du premier nombre:");
    scanf("%d",&a);
    do {
    printf("\nSaisie de second nombre:");
    scanf("%d",&b);
    } while(b==0);
    printf("\n%d + %d=%d",a,b,a+b);
    printf("\n%d - %d=%d",a,b,a-b);
    printf("\n%d / %d=%f\n",a,b,(float)a/b);
    return(0);
    }
    }

