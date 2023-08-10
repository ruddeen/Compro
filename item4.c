#include<stdio.h>
int main () 
{
    int count;
    int row,col;
    char ch='A';
    printf("Enter : ");
    scanf("%d", &count);

    for (row = 0; row < count; row++) {
        for(col = 0; col < count; col++){

            printf("%c", (row+col)%count+'A');
        } 
        printf("\n");
    }
    return 0;
}