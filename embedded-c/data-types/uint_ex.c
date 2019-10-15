//copyright: https://publications.gbdirect.co.uk/c_book/copyright.html

#include <stdio.h>
#include <stdlib.h>

main(){
      int x;
      x = 0;
      while(x >= 0){
              printf("%u\n", x);
              x = x+100000000;
      }

      exit(EXIT_SUCCESS);
}

