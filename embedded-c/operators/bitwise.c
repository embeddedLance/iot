//copyright: https://publications.gbdirect.co.uk/c_book/copyright.html

#include <stdio.h>
#include <stdlib.h>

main(){
      unsigned short x,y;
      x = 0; y = ~0;

      while(x != y){
              printf("%02x &  %02x   = %02x\n", x, 0xff, x&0xff);
              printf("%02x |  %02x  = %02x\n", x, 0x10f, x|0x10f);
              printf("%02x ^  %02x = %02x\n", x, 0xf00f, x^0xf00f);
              printf("%02x >> 2    = %02x\n", x, x >> 2);
              printf("%02x << 2    = %02x\n", x, x << 2);
              x = (x << 1) | 1;
      }
      exit(EXIT_SUCCESS);
}
