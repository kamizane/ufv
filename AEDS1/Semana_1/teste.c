#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num,res;
    scanf("%d",&num);
    res = (num % ((15-10)+1)) + 10;
    printf("%d",res);
    return 0;
}