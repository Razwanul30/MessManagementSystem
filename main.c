#include <stdio.h>
#include "auth.h"
#include "student.h"
#include "meal.h"
#include "billing.h"
#include "file_handler.h"

int main() {
    printf("Mess System Started\n");
    fh_init();
    auth_login();
    return 0;
}
