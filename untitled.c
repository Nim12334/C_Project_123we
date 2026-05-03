#include <stdio.h>
#include <stdlib.h>
int main(){
int c,f,coin,coin1,coin2,coin3,coin4;
coin=100;
coin3=0;
coin1=0;
coin2=0;
int *array = (int*)malloc(coin * sizeof(int));
int *array1 = (int*)malloc(coin * sizeof(int));
while((c=getchar())!=EOF){

coin1++;
if(c==10){
    c=-1;
}
if(c==32){
    array1[coin3]=coin1;
    coin3++;

}
array[coin1]=c;

}

for(coin2=0;(coin3-1)>coin2;coin2++){


        if(array1[coin2]=(array1[coin2+1]-1)){
        array[array1[coin2]]=16;
        }

}
coin2=0;
char h;
for(coin2=0;coin1>=coin2;coin2++){
    h=array[coin2];
    printf("%c",h);
}

}
