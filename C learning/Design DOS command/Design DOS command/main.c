//
//  main.c
//  Design DOS command
//


#include<stdio.h>

void main(int argc,char *argv[]) {
    int stat;
    if(argc>2 ||argc <2) {
        printf("Please Enter valid arguments !");
        exit(1);
    }

    stat = mkdir(argv[1]);

    if (stat==0)
        printf("\nDirectory created successfully !");
    else {
        printf("\nUnable to create directory !");
    exit(1);
    }
}
