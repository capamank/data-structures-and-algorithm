#include <stdio.h>
struct aman{
    int x;
    float y;
    char z;
};
int main(){
    struct aman a1,a2,a3 ;

    a1.x=10;
    a1.y=10.5;
    a1.z='j';

    a2.x=90;
    a2.y=55.8;
    a2.z='h';

    a3.x=34;
    a3.y=34.2;
    a3.z='r';

    printf("%d\n",a1.x);
    printf("%f\n",a1.y);
    printf("%c\n",a1.z);

    printf("%d\n",a2.x);
    printf("%f\n",a2.y);
    printf("%c\n",a2.z);

    printf("%d\n",a3.x);
    printf("%f\n",a3.y);
    printf("%c\n",a3.z);
    return 0;

    
}