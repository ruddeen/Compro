#include <stdio.h>
int main() {
   int i, s, r, num=10 ,n, k = 0;
   printf("input (1-20)  : ");
   scanf("%d", &r);

   if(r >= 1 && r <= 20){
    printf(" \n");
    for (i = 1; i <= r; ++i, k = 0) {
      for (s = 1; s <= r ; ++s) {
         if(num <= 9 && num > 1 ){
            num = num - 1;
         }
         else{
            num=9;
         }
         printf("  %d",num);
      }
      printf("\n");
        }
        return 0;
    }
    
    else{
        printf(" \n");
        printf("No Answer");
    }
}