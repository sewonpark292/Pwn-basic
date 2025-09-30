#include <stdio.h>
#include <stdlib.h>

int main() {
  char *chunk;
  char *chunk2;
  char *chunk3;

  chunk = malloc(0x50);
  chunk2 = malloc(0x50);
  chunk3 = malloc(0x50);
  read(0, chunk, 0x50);
  read(0, chunk2, 0x50);
  read(0,chunk3, 0x50);

  printf("Address of chunk: %p\n", chunk);
  printf("Address of chunk2: %p\n", chunk2);
  printf("Address of chunk3: %p\n", chunk3);

  free(chunk);
  free(chunk2);
  free(chunk3); // Free again
  
  char* chunk4, chunk5;  

  chunk4 = malloc(0x50);
  chunk5 = malloc(0x50);
  
  read(0, chunk4, 0x50);
  read(0, chunk5, 0x50);

  free(chunk5);
  free(chunk4);
}
