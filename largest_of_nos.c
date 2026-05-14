#include<stdio.h>
int main(){
    printf("finding the largest of three numbers ;-\n");
    int x,y,z;
    printf("enter the first number;- ");
    scanf("%d",&x);
    printf("enter the second number;- ");
    scanf("%d",&y);
    printf("enter the third number;- ");
    scanf("%d",&z);
    if (x>z&&x>y){
    
        printf("the largest of three numbers is-: %d",x);
    }
    else if (y>z&&y>x)
    {
        printf("the largest of three numbers is-: %d",y);
    }
    else if(z>y&&z>x)
    {
        printf("the largest of three numbers is-: %d",z);
    }

    return 0;
}