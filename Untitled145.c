#include <stdio.h>
int unsqueze(char s1[],char s2[]){
int x=0;
int s1_i=0;
int s2_i=0;
int x1=-1;

while(x!=1){
if(s1[s1_i]!='`'){
    int y=0;
    while(y!=1){
        if(y==0&&s2[s2_i]!='`'&&s2[s2_i]==s1[s1_i]){
            x1=s1_i;
            s2_i=0;
            y=1;
            x=1;

        }
        else if(y==0&&s2[s2_i]!='`'&&s2[s2_i]!=s1[s1_i]){
            s2_i++;
        }
        else if(y==0&&s2[s2_i]=='`'){
            s2_i=0;
            y=1;
        }
    }
    s1_i++;


}
else{

    x=1;
}


}
return x1;

}




int main(){
char h[40]="ou Yare idiot(btW)&??!!`";
char h1[]="W`";
printf("%d",unsqueze(h,h1));

}
