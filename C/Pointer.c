#include<stdio.h>
#include<stdlib.h>

int main(void){
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    ptr1 = (int*)malloc(sizeof(int)*24);
    printf("size of *int * 24 : %zd\n", sizeof(ptr1));
    free(ptr1);
    ptr2 = (int*)malloc(sizeof(int)*1024);
    printf("size of *int * 124 : %zd\n", sizeof(ptr2));
    free(ptr2);

}