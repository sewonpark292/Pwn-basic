// Name: fsb-auth.c
// Compile: gcc -o fsb-auth fsb-auth.c
#include <stdio.h>
#include <unistd.h>
int main(void) {
    setvbuf(stdin, 0, 2, 0);
    setvbuf(stdout, 0, 2, 0);
    uint64_t auth = get_random();
    char buf[64] = {0, };
    
    printf("input: ");
    read(0, buf, 63);
    printf(buf);
}
