#include <stdio.h>
#include <limits.h>
int main(){
    printf("Char:min(%d),max(%d)\n",CHAR_MIN,CHAR_MAX);
    printf("Int:min(%d),max(%d)\n",INT_MIN,INT_MAX);
    printf("Short:min(%d),max(%d)\n",SHRT_MIN,SHRT_MAX);
    printf("Long:min(%d),max(%d)\n",LONG_MIN,LONG_MAX);
    printf("Long:min(0),max(%llu)\n",ULONG_MAX);
}
