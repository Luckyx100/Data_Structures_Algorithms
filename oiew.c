#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    b = (a+b) - (a=b);
    printf("a = %d, b = %d", a, b);
}
/*
  Normal comment
  ! This is danger comment 
  TODO - tips or important 
*/