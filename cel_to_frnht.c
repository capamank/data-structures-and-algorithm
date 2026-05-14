#include <stdio.h>
int main(){
    printf("program to convert celcius to farenheight");
    printf("\nenter the temperature in celcius:-- ");
    float x,y,z;
    scanf("%f",&x);
    y=x*1.8+32;
    printf("%f degree celcius = %f degree faenheight",x,y);
    return 0;
}
