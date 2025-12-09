#include <stdio.h>
#include "file_handler.h"

void fh_init() {
    FILE *fp = fopen("data.txt", "a");
    if(fp) fclose(fp);
}
