#include <stdio.h>
int main(){
unsigned long long v=2;
int y=sizeof(unsigned long)*8;




for(int x=1;x<y;x++){
 v*=2;
}

printf("0->%llu\n",v);



}

