#include <stdio.h>
void entab(){
int c;
int g=0;
int g1=0;
int indicator1;
while((c=getchar())!=EOF){
    if(c==32){
        g++;
    }
    else if(c!=32){

        g1++;
        if(g1==8 || c==10){
            g1=0;
        }
        if(g!=0){
          g1--;
          if(g1==8 || g1>8){
            g1=0;
          }

          if(g==8-g1){

            printf("%c",9);
            g=0;
            g1=0;

          }
          else if(g<8-g1){
            for(int x=0;x<g;x++){
                printf("%c",32);

            }

                g1+=g;
                g1+=1;




          g=0;

          }
          else if(g>8-g1){
            printf("%c",9);
            g-=(8-g1);
            int g2=g/8;
            for(int x=0;x<g2;x++){
                printf("%c",9);
            }
            g-=(g2*8);
            for(int x=0;x<g;x++){
                printf("%c",32);
            }
            g1=g;
            g1+=1;
            g=0;

          }

        }
        printf("%c",c);



    }





}


}

int main(){

entab();

}



