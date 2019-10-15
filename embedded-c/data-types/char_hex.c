//copyright: https://publications.gbdirect.co.uk/c_book/copyright.html

#include <stdio.h>
#include <stdlib.h>
main(){
      char c;

      c = 'a';
      while(c <= 'z'){
              printf("hex: %02x value %d char %c\n", c, c, c);
              c = c+1;
      }

      exit(EXIT_SUCCESS);
}
