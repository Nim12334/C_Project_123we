#include <stdio.h>
int main(){
int c;
int y;
const int cf=10000;
int h1[cf];
char h[cf];
int y1=0;

for (y1=0;y1<cf;y1++){
    h1[y1]=0;

}
y1=0;
while((c=getchar())!=EOF)
{
 h[y1]=c;
 y1++;


}

for(int g=0;g<y1;g++){
        ++h1[h[g]];

}

for(int g1=0;g1<cf;g1++){

    if(h1[g1]!=0){

        printf("%c:",g1);
        for(int ter=0;ter<h1[g1];ter++){


            printf("*");
        }
        printf("\n");
    }
}

}

