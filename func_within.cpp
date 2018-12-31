#include<stdio.h>

void func1();
void func2();

//GCC does not support pragma, so the code below wont work
//specify the function to run before the program start up(before control
//passes to main) and just before the program exit(before control returns from main)
//#pragma startup func1
//#pragma exit func2

//use code below to produce similar output
void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();

void func1(){
    printf("Inside func1\n");
}

void func2(){
    printf("Inside func2\n");
}

int main(){
    
    void func1();
    void func2();
    printf("Inside main\n");

    return 0;
}