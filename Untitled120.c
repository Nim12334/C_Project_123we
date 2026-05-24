#include <stdio.h>
#define MAXLINE 1000

int main(){
int len;
int max;
char line[MAXLINE];
char longest[MAXLINE]={0};
char s[1000]={0};
char win[1000]={0};
int yh=0;
max=0;
int c,i,i1,i2;
i2=0;
i1=0;
while((c=getchar())!=EOF){
    s[i1]=c;
    i1++;

}

for(int u=0;u<MAXLINE;u++){
if(s[u]!='\n'){
    i2++;

}
else{
    if(i2==max){
    max=i2;
    for(int g=u-i2;g<=u;g++,yh++){
        if(win[yh]==0){
            win[yh]=s[g];

        }
    }
    i2=0;

    }
    else if(i2>max){
        max=i2;
        yh=0;


            for(int g=u-i2;g<=u;g++,yh++){

            win[yh]=s[g];

    }



        i2=0;
    }






}


}
for(int h=0;h<yh;h++){
        printf("%c",win[h]);


}

}
















