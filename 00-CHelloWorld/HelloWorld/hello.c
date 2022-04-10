#include <stdio.h>
int main(void) {
fprintf(stdout, "Hello, world!");
FILE *output = fopen("output.txt", "w");
fprintf(output, "Hello, world!");
}