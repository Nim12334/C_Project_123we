#include <stdio.h>
int main(){
char c1[10000]={};
int y=0;
int c;
while((c=getchar())!=EOF){
        c1[y]=c;
        y++;
}
int gf=-1;
int indicator1=0;


int indicator2=0;
int x=0;
for(x=0;x<10000;x++){

    if(c1[x]==32||c1[x]==9||c1[x]==26){

         if(indicator2==0){
            gf=x;


            indicator2=1;
            indicator1=0;

            }



    }
    else if(c1[x]==10){
          if(indicator1==0&&gf!=-1){



          for(indicator1=-1;gf<x;gf++){

            c1[gf]=0;
          }

          gf=-1;
        }
        indicator2=0;



    }
    else{


     indicator1=-1;



    }
}


for(int gh=0;gh<10000;gh++){
    if(c1[gh]!=0){
    printf("%c",c1[gh]);

    }

}


}
