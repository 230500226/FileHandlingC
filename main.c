#include <stdio.h>

int main(){

    FILE *Log;

    Log = fopen("./Log.txt", "wt");

    fprintf(Log, "1. This is test for fprintf hello world text file...\n");

    fputs("2. This is test for fputs hello world text file...\n", Log);

    fclose(Log);


return 0;}