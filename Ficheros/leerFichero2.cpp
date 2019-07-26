#include <stdio.h>
#include <errno.h>
#include <string.h>

int
main() {

  FILE *fd = fopen("leerFicheroX.cpp", "r");

  if (fd == NULL) {
    fprintf(stderr, "Problemas: %s \n", strerror(errno));
    return 1;
  }
  
  int c;
  while ((c = getc(stdin)) != EOF) {
    c += 7;
    fputc(c, stdout);
  }
  return 0;
}
