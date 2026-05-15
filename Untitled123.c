#include <stdio.h>
void reverse(char s[]){
int i=0;
for(i=0;s[i]!=0;i++);
char l[i];
int i1=i;
int i2=-1;
while(i1>0){
    i2++;
    i1--;
    l[i1]=s[i2];
}
for(int h=0;h<i;h++){
    printf("%c",l[h]);
}


}

int main(){
    int c;
    int h=0;
    char jet[10000];
    for(int h1=0;h1<10000;h1++){

        jet[h1]=0;
    }
    while((c=getchar())!=EOF){
            jet[h]=c;
            h++;


    }

    reverse(jet);
}
