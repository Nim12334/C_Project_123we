#include <stdio.h>
void detab(int y){

	int c;
	while((c=getchar())!=EOF){
		if(c==9){
			if(y>0){
			c=32;
			y--;
		}
			
		}
		putchar(c);
	}

}
int main(){
int y=5;
detab(y);
}