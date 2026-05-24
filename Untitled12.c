#include <stdio.h>
int main(){
int c;
int p=0;
int max=0;
int position=0;
while((c=getchar())!=EOF){
    if(c=='\n'){
            if(p>=max){
                max=p;
                p=0;
                position++;
            }


    }
    else if(c!='\n'){

        p++;
    }
}
printf("Maximum:%d,Position:%d",max,position);



}
