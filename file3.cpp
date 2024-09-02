#include<stdio.h>
int main(){
     FILE *ptr;
    char ch ;
    ptr=fopen("folder.txt","r");

    fscanf(ptr,"%c",&ch);
    printf("%c\n",ch);
    fscanf(ptr,"%c",&ch);
    printf("%c\n",ch);
    fscanf(ptr,"%c",&ch);
    printf("%c\n",ch);
      fscanf(ptr,"%c",&ch);
    printf("%c\n",ch);
    fscanf(ptr,"%c",&ch);
    printf("%c\n",ch);
    fscanf(ptr,"%c",&ch);
    printf("%c\n",ch);

    fclose(ptr);
    return 0;
} 