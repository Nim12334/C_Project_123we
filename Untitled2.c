#include <stdio.h>
int main(){
int y=0;
int y1=0;
int c;
char h[10000];
int h1[10000];
int x4=0;
int x5=0;
for (x4=0;x4<10000;x4++){

    x5++;
    h1[x4]=0;


}
while((c=getchar())!=EOF){


 h[y]=c;

 y++;










}




int x=0;
int x2=0;






for(x2=0;x<y;x++){
if(h[x]!=32&&h[x]!=10&&h[x]!=9){
  x2++;









}else{

    ++h1[x2-1];
    x2=0;



}


}


int ter=0;
for(y1=0;y1<y;y1++){

    if (h1[y1]!=0){
            printf("%d:",y1+1);

            for(ter=0;ter<h1[y1];ter++){


                    printf("*");

            }
            printf("\n");




    }






}




return 0;

}




