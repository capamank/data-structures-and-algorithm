#include <stdio.h>
int main(){
    FILE *new;
    char x[100];
    new = fopen("hi.txt","r");
    printf("File content:\n");
    while (fgets(x, sizeof(x), new)) {
        printf("%s", x);
    
    }
    return 0;

}