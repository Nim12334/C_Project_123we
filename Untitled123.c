#include <stdio.h>
int main(){
int g;
char z;
while((g=getchar())!=EOF){
z=(g>=65&&g<=90)?g+32:g;
putchar(z);
}

}
