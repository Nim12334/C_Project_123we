#include <stdio.h>

void cel(int under,int above,int step){

for(above>under;under<above;under+=step){
    float fareh=(under*1.8)+32;
    printf("%0.1f    %d\n",fareh,under);
}
}

int main(){
    cel(0,300,20);



}
