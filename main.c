#include <stdio.h>

void file1_myFun1(void);

static int mainPrivateData;

int main(){
    mainPrivateData = 100;
    printf("mainPrivateData = %d\n", mainPrivateData);

    file1_myFun1();
    printf("mainPrivateData = %d\n", mainPrivateData);

    return 0;

}