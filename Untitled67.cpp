#include <stdio.h>
int main(){
	
	int c;
	while((c=getchar())!=EOF){
		if(c==32){
			c='        ';
			
		}
		putchar(c);
	}
}