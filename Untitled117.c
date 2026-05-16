#include <stdio.h>
void threshold(int y){
int c;
char d[10000];
for(int h=0;h<10000;h++){
    d[h]=0;
}

int i=0;
while((c=getchar())!=EOF){
        d[i]=c;
        ++i;
}
int x;
for(int h=0,x=0;h<10000;h++){
    if(d[h]==0||d[h]==32||d[h]==9||d[h]==10){
            if(x>y);
            else if(x<=y){

                for(int g=h-x;g<=h;g++){
                    d[g]=0;
                }
            }
            x=0;

    }
    else{
        x++;
    }

}
for(int u=0;u<10000;u++){
    if(d[u]==0);
    else{
        printf("%c",d[u]);
    }
}
}


int main(){
int v=20;
threshold(v);
}
