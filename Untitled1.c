#include <stdio.h>
int main(){
int c,g2;
g2=0;
while((c=getchar())!=EOF){
    if (c!=32 && c!=9){
        g2=0;
        putchar(c);
    }
    else{
        if(c==32 && g2!=1){
        g2++;
        c= 10;
        putchar(c);
        }
        if(c==9 && g2!=1){
        g2++;
        c= 10;
        putchar(c);
        }
    }
}

}
