#include <stdio.h>

void myFun1(void);

int main(){
    myFun1();
    myFun1();
    myFun1();
    myFun1();

    return 0;
}

void myFun1(void){
    int count = 0;
    count++;

    printf("This function executed %d times\n", count);

}