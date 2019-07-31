#include <stdio.h>
#include <errno.h>
#include <string.h>

int
main() {

  FILE *fd = fopen("leerFichero.cpp", "r");

  if (fd == NULL) {
    fprintf(stderr, "Problemas: %s \n", strerror(errno));
    return 1;
  }
  
  int c;
  while ((c = getc(fd)) != EOF) {
    c += 7;
    fputc(c, stdout);
  }
  return 0;
}
