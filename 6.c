#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("input");
    printf("\na=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    printf("d=");
    scanf("%d",&d);
    if (a!=b){
        if (a!=c){
            if (a!=d) printf("numb 1");
        }
    }
    if (b!=c){
        if (b!=d){
            if (b!=a) printf("numb 2");
        }
    }
    if (c!=d){
        if (c!=a){
            if (c!=b) printf("numb 3");
        }
    }
    if (d!=a){
        if (d!=b){
            if (d!=c) printf("numb 4");
        }
    }
    return 0;
}