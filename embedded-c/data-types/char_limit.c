#include <stdio.h>
#include <stdint.h>

unsigned char a;

void main(){
    while(a < 256){
	printf("a: %d\n", a);
        a += 1;
    }
}
