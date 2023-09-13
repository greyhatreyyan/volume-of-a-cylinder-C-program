#include<stdio.h>
int main(){
    const float  PI=3.14;
    float r, h, v;
    printf("enter value of radius: ");
    scanf("%f",&r);
    printf("enter value of height: ");
    scanf("%f",&h);
    v=PI*r*r*h;
    printf("v= %.2f cm^3 \n",v);
    return 0;

}
