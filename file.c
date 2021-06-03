#include<stdio.h>
int main()
{
    FILE*file;
    file=fopen("pangram.cpp","r");
    if(file)
        printf("file is opened");
    else
        printf("error");
    return 0;
}

