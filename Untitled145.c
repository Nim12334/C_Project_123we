#include <stdio.h>
void unsqueze(char s1[],char s2[]){
int x=0;
int s1_i=0;
int s2_i=0;
while(x!=1){
if(s1[s1_i]!='`'){
    int y=0;
    while(y!=1){
        if(y==0&&s2[s2_i]!='`'&&s2[s2_i]==s1[s1_i]){
            s1[s1_i]=0;
            s2_i=0;
            y=1;

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
int z=0;
x=0;
while(z!=1){
    if(s1[x]=='`'){
      z=1;
    }
    if(z!=1){
    printf("%c",s1[x]);

        x++;
    }
}



}
int main(){
char h[40]="You are idiot(btW)&??!!`";
char h1[]="Ya)&W!?`";
unsqueze(h,h1);

}
