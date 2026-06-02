#include <stdio.h>
int main(){
unsigned long long v=2;
int y=sizeof(short)*8;




for(int x=1;x<y;x++){
 v*=2;
}
unsigned long long y2=(v-1)/2;
unsigned long long y1=(v-1)/2+1;
printf("-%llu->%llu\n",y1,y2);



}

